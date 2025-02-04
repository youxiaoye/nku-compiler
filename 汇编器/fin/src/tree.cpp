#include "tree.h"
#include<queue>
void typeCheck(TreeNode *t);
string regname[6]={"\%eax","\%ebx","\%ecx","\%edx","\%esi","\%edi"};
bool regstat[6]={false,false,false,false,false,false};
void TreeNode::addChild(TreeNode* child) {
	if(this->child==nullptr)
		this->child=child;
	else
	{
		TreeNode* lastChild=this->child;
		while(lastChild->sibling!=nullptr){lastChild=lastChild->sibling;}
		lastChild->sibling=child;
	}
}

void TreeNode::addSibling(TreeNode* sibling){
	if(this->sibling==nullptr)
		this->sibling=sibling;
	else
	{
		TreeNode* crr=this->sibling;
		while(crr->sibling!=nullptr){crr=crr->sibling;}
		crr->sibling=sibling;
	}
}

TreeNode::TreeNode(int lineno, NodeType type) {
	this->lineno=lineno;
	this->nodeType=type;
}

void TreeNode::genNodeId() {
	this->nodeID=1;
}

void TreeNode::printNodeInfo() {
	cout<<"node id\t"<<this->nodeID<<"\t";
	if(this->nodeType==NODE_TYPE)
	{
		if(this->type->type==VALUE_INT)
			cout<<"int\t";
		else if(this->type->type==VALUE_CHAR)
			cout<<"char\t";
		else if(this->type->type==VALUE_BOOL)
			cout<<"bool\t";
		else
			cout<<"none\t";
	}
	else if(this->nodeType==NODE_CONST)
	{
		if(this->type->type==VALUE_CHAR)
			cout<<this->int_val<<"\t";
		else if(this->type->type==VALUE_INT)
			cout<<this->int_val<<"\t";
		else if(this->type->type==VALUE_STRING)
			cout<<this->str_val<<"\t";
		else
			cout<<"none\t";
	}
	else if(this->nodeType==NODE_IDLIST)
		cout<<"IDLIST\t";
	else if(this->nodeType==NODE_VAR)
	{
		cout<<this->var_name<<"@"<<this->idnum<<"\t";
		if(this->type->type==VALUE_INT)cout<<"INT\t";
		else if(this->type->type==VALUE_CHAR)cout<<"CHAR\t";
		else if(this->type->type==VALUE_BOOL)cout<<"BOOL\t";
		else if(this->type->type==VALUE_STRING)cout<<"STRING\t";
		else if(this->type->type==VALUE_UNKNOW )cout<<"UNKNOW\t";
		else cout<<"WRONG\t";
	}
	else if(this->nodeType==NODE_FUNC)
		cout<<"FUNC\t";
	else if(this->nodeType==NODE_PROG)
		cout<<"ROOT\t";
	else if(this->nodeType==NODE_EXPR)
	{
		cout<<"EXPR_";
		if(this->optype==OP_PLUS)
			cout<<"PLUS\t";
		else if(this->optype==OP_MUL)
			cout<<"MUL\t";
		else if(this->optype==OP_MINUS)
			cout<<"MINUS\t";
		else if(this->optype==OP_DIV)
			cout<<"DIV\t";
		else if(this->optype==OP_BIGGER)
			cout<<"BIGGER\t";
		else if(this->optype==OP_LESS)
			cout<<"LESS\t";
		else if(this->optype==OP_BIGGERE)
			cout<<"BIGGER=\t";
		else if(this->optype==OP_LESSE)
			cout<<"LESS=\t";
		else if(this->optype==OP_NOT)
			cout<<"NOT\t";
		else if(this->optype==OP_AND)
			cout<<"AND\t";
		else if(this->optype==OP_OR)
			cout<<"OR\t";
		else if(this->optype==OP_EQUAL)
			cout<<"EQUAL\t";
		else if(this->optype==OP_SELFPLUS)
			cout<<"SELFPULS\t";
		else if(this->optype==OP_EQUAL)
			cout<<"EQUAL\t";
		else if(this->optype==OP_MOD)
			cout<<"MOD\t";
		else if(this->optype==OP_PLUSE)
			cout<<"+=\t";
		else if(this->optype==OP_MINUSE)
			cout<<"-=\t";
		else if(this->optype==OP_PP)
			cout<<"id++\t";
		else if(this->optype==OP_MM)
			cout<<"id--\t";
		else if(this->optype==OP_P)
			cout<<"++id\t";
		else if(this->optype==OP_M)
			cout<<"--id\t";
		else
			cout<<"none\t";
		if(this->type->type==VALUE_INT)cout<<"INT\t";
		else if(this->type->type==VALUE_CHAR)cout<<"CHAR\t";
		else if(this->type->type==VALUE_BOOL)cout<<"BOOL\t";
		else if(this->type->type==VALUE_STRING)cout<<"STRING\t";
		else if(this->type->type==VALUE_UNKNOW )cout<<"UNKNOW\t";
		else cout<<"WRONG\t";
	}
	else if(this->nodeType==NODE_STMT)
	{
		if(this->stype==STMT_DECL)
			cout<<"DECL\t";
		else if(this->stype==STMT_SKIP)
			cout<<"SKIP\t";
		else if(this->stype==STMT_FORCON)
			cout<<"FORCON\t";
		else if(this->stype==STMT_ASSIGN)
			cout<<"ASSIGN\t";
		else if(this->stype==STMT_WHILE)
			cout<<"WHILE\t";
		else if(this->stype==STMT_IF)
			cout<<"IF\t";
		else if(this->stype==STMT_IFBODY)
			cout<<"IFBODY\t";
		else if(this->stype==STMT_ELSE)
			cout<<"ELSE\t";
		else if(this->stype==STMT_ELSEIF)
			cout<<"ELSEIF\t";
		else if(this->stype==STMTS)
			cout<<"STMTS\t";
		else if(this->stype==STMT_FOR)
			cout<<"FOR\t";
		else if(this->stype==STMT_PRINTF)
			cout<<"PRINTF\t";
		else if(this->stype==STMT_SCANF)
			cout<<"SCNAF\t";
		else if(this->stype==STMT_CON)
			cout<<"CON\t";
	}	
	else
		cout<<"none\t";
	cout<<"line"<<lineno;
	cout<<" begin:"<<this->label.begin_label<<" true:"<<this->label.true_label<<" next:"<<this->label.next_label<<" false:"<<this->label.false_label;
}

void TreeNode::printChildrenId() {
	cout<<" child:";
	TreeNode* crr=this->child;
	while(crr!=nullptr)
	{
		cout<<crr->nodeID<<" ";
		crr=crr->sibling;
	}
}

void TreeNode::printAST() {
	TreeNode* crr;
	queue<TreeNode*> q;
	q.push(this);
	int la=1;
	while(!q.empty())
	{
		crr=q.front();
		typeCheck(crr);	
		TreeNode* c=crr;
		q.pop();
		crr=crr->child;
		while(crr!=nullptr)
		{
			la++;
			crr->nodeID=la;
			q.push(crr);
			crr=crr->sibling;
		}
		c->printNodeInfo();
		c->printChildrenId();
		cout<<endl;
	}
}


// You can output more info...
void TreeNode::printSpecialInfo() {
    switch(this->nodeType){
        case NODE_CONST:
            break;
        case NODE_VAR:
            break;
        case NODE_EXPR:
            break;
        case NODE_STMT:
            break;
        case NODE_TYPE:
            break;
        default:
            break;
    }
}

int labelid=1;
string new_label()
{	
	string ans="l";
	for(int i=labelid;i!=0;i/=10)
		ans+=((i%10)+'0');
	labelid++;
	return ans;
}

void recursive_get_label(TreeNode* t)
{
	if(t->nodeType==NODE_STMT)
	{
		stmt_get_label(t);
	}
	t=t->sibling;
	while(t!=nullptr)
	{
		recursive_get_label(t);
		t=t->sibling;
	}
}

void get_label(TreeNode* t)
{
	t=t->child->child->sibling->sibling;
	recursive_get_label(t);
}

void stmt_get_label(TreeNode* t)
{
	switch(t->stype)
	{
		case STMTS:
		{
			TreeNode*crr=t->child;
			while(crr)
			{
				recursive_get_label(crr);
				crr=crr->sibling;
			}
		};break;
		case STMT_WHILE:
		{
			TreeNode *e=t->child;
			TreeNode *s=e->sibling;
			if(t->label.begin_label=="")
				t->label.begin_label=new_label();
			s->label.next_label=t->label.begin_label;
			s->label.begin_label=e->label.true_label=new_label();
			//if(t->label.next_label=="")
				//t->label.next_label=new_label();
			e->label.false_label=new_label();//e->label.false_label=t->label.next_label;
			if(!t->sibling)
			{
				TreeNode*temp = new TreeNode(t->lineno, NODE_STMT); temp->stype = STMTS;
				t->addSibling(temp);
			}
			t->sibling->label.begin_label=e->label.false_label;
			recursive_get_label(e);
			recursive_get_label(s);
		};break;
		case STMT_IFBODY:
		{
			TreeNode *ifb=t->child;
			TreeNode *elseb=ifb->sibling;
			recursive_get_label(ifb);
			if(!t->sibling)
			{
				TreeNode *temp = new TreeNode(t->lineno, NODE_STMT);
				temp->stype = STMTS;
				t->addSibling(temp);
			}
			t->sibling->label.begin_label = new_label();
			if (elseb)
			{
				recursive_get_label(elseb);
				elseb->child->label.begin_label=ifb->child->label.false_label ;
				elseb->child->label.next_label=t->sibling->label.begin_label ;
				ifb->child->sibling->label.next_label = t->sibling->label.begin_label;
				//elseb->child->label.next_label=ifb->child->sibling->label.next_label;;
			}
			else
			{
				ifb->child->label.false_label=t->sibling->label.begin_label;
			}
			
			ifb->child->sibling->label.next_label=t->sibling->label.begin_label;
			//elseb->child->label.next_label;=
		};
		break;
		case STMT_IF:
		{
			TreeNode *e=t->child;
			TreeNode *s=e->sibling;
			recursive_get_label(e);
			recursive_get_label(s);
			e->label.true_label=new_label();
			e->label.false_label=new_label();
			s->label.begin_label=e->label.true_label;
			//s->label.next_label=new_label();
		};break;
		case STMT_ELSE:
		{
			TreeNode *crr=t->child;
			while(crr)
			{
				recursive_get_label(crr);
				crr = crr->sibling;
			}
		};
		break;
		case STMT_FOR:
		{
			TreeNode *fcon=t->child;
			TreeNode *f=fcon->sibling;
			recursive_get_label(fcon);
			recursive_get_label(f);
			f->label.begin_label = fcon->child->sibling->label.true_label;
			f->label.next_label = fcon->child->sibling->sibling->label.begin_label;
			if(!t->sibling)
			{
				TreeNode*temp = new TreeNode(t->lineno, NODE_STMT); temp->stype = STMTS;
				t->addSibling(temp);
			}
			t->sibling->label.begin_label=fcon->child->sibling->label.false_label;
		};
		break;
		case STMT_FORCON:
		{
			TreeNode *a=t->child;
			TreeNode *b=a->sibling;
			TreeNode *c=b->sibling;
			b->label.begin_label = new_label();
			b->label.true_label = new_label();
			b->label.false_label = new_label();
			c->label.begin_label = new_label();
			c->label.next_label = b->label.begin_label;
		};
		break;
		default:
		{
			//cout<<"default\n";
		};
		break;
		}
}

int giveme_reg(int no = -1)
{
	int ret=-1;
	for(int i=1;i<=5;++i)
	{
		if(i==no)
			continue;
		
		//cout << regname[i] << "<---yiuhfoiuhgosuifdvbnioufdshnhbvicxb iusdfohgb 9sdf8yugh89-" << endl;
		if (!regstat[i])
		{
			regstat[i] = true;
			return i;
		}
	}
	if(ret==-1)
	{
		cout << "bigwrong!";
	}
	return ret;
}
void prin(TreeNode* t,int i)
{
	string ii[2] = {"$", ""};
	if(t->nodeType == NODE_CONST)
		i = 0;
	if (t->nodeType == NODE_CONST)
	{
		cout<<ii[i]<<t->int_val;
	}
	else if(t->nodeType==NODE_VAR)
		cout<<ii[i]<<t->var_name<<t->idnum;
}

int TreeNode::gen_node_asm()//0:immid  -1:stack 1,2,3,4,....:reg
{
	int reg=0;
	if(this->label.begin_label!="")
		cout<<this->label.begin_label<<":";
	if(this->nodeType==NODE_VAR || this->nodeType==NODE_CONST)
		reg=0;
	else if(this->nodeType==NODE_EXPR)
	{
		if(this->optype==OP_DIV || this->optype==OP_MOD)
		{
			string divmod[2] = {"\%eax", "\%edx"};
			int cho=1;
			if(this->optype==OP_DIV)
				cho = 0;
			int reg1 = this->child->gen_node_asm(), reg2 = this->child->sibling->gen_node_asm();
			regstat[reg1] =false;
			regstat[reg2] = false;
			if (reg2 == 0)
			{
				reg2 = giveme_reg(3);
				cout << "\tmov\t";
				prin(this->child->sibling,1);
				cout<< "," << regname[reg2] << endl;
			}
			if(reg2==3)
			{
				int temp = giveme_reg();
				cout << "\tmov\t" << regname[reg2] << "," << regname[temp] << endl;
				regstat[reg2] = false;
				reg2 = temp;
			}
			if(reg1!=0)
			{
				cout << "\tmovl\t" << regname[reg1] << ",\%eax"<<endl;
				reg1 = 0;
			}
			else
			{
				cout << "\tmovl\t";
				prin(this->child,1);
				cout << ",\%eax\n";
			}
			cout << "\tpushl\t\%edx\n";
			cout << "\tmovl\t$0,\%edx\n";
			cout << "\tidivl\t"<< regname[reg2];
			regstat[reg2] = false;
			reg = giveme_reg(3);
			cout << endl;
			cout << "\tmovl\t" << divmod[cho] << "," << regname[reg] << "\n";
			cout<<"\tpopl\t\%edx\n";
		}
		else if(this->optype==OP_PLUS || this->optype==OP_MUL || this->optype==OP_MINUS)
		{
			string ys[]={"addl","imull","subl"};
			int func;
			switch(this->optype)
			{
				case OP_PLUS:func=0;break;
				case OP_MUL:func=1;break;
				case OP_MINUS:func=2;break;
				default:break;
			}
			int reg1=this->child->gen_node_asm(),reg2=this->child->sibling->gen_node_asm();
			//cout<<this->nodeID<<endl;//cout<<"reg="<<reg1<<" reg="<<reg2<<endl;
			if(reg1==0 && reg2==0)
			{
				reg=giveme_reg();
				//if(reg==-1)cout<<"WRONG!!!";
				cout<<"\tmovl\t";
				prin(this->child,1);
				cout<<","<<regname[reg]<<"\n\t"<<ys[func]<<"\t";
				prin(this->child->sibling,1);
				cout<<","<<regname[reg]<<"\n";
			}
			else if(reg1==0)
			{
				reg=reg2;
				cout<<"\t"<<ys[func]<<"\t";
				prin(this->child,1);
				cout<<","<<regname[reg]<<"\n";
			}
			else if(reg2==0)
			{
				reg=reg1;
				cout<<"\t"<<ys[func]<<"\t";
				prin(this->child->sibling,1);
				cout<<","<<regname[reg]<<"\n";
			}
			else
			{
				reg=reg1;
				cout<<"\t"<<ys[func]<<"\t"<<regname[reg2]<<","<<regname[reg]<<endl;
				regstat[reg2]=false;
			}
		}
		else if( this->optype==OP_AND||this->optype==OP_OR)
		{
			string ys[]={"andl","orl"};
			int func;
			switch(this->optype)
			{
				case OP_AND:func=0;break;
				case OP_OR:func=1;break;
				default:break;
			}
			int reg1=this->child->gen_node_asm(),reg2=this->child->sibling->gen_node_asm();
			regstat[reg1] = false;
			regstat[reg2] = false;
			cout << "\tmovl\t";
			if(reg1==0)
				prin(this->child, 1);
			else
				cout << regname[reg1];
			cout << ",%eax\n\t" << ys[func] << "\t";
			if(reg2==0)
				prin(this->child->sibling, 1);
			else
				cout << regname[reg2];
			cout << "," << regname[reg1] << endl;
			reg = giveme_reg();
			cout << "\tmovl\t%eax," << regname[reg] << endl;
		}
		else if (this->optype == OP_BIGGER || this->optype == OP_LESS || this->optype == OP_BIGGERE || this->optype == OP_LESSE || this->optype == OP_EQUAL || this->optype==OP_NEQUAL)
		{
			string ys[]={"jg","jl","jge","jle","je","jne"};
			int func;
			switch(this->optype)
			{
				case OP_BIGGER:func=0;break;
				case OP_LESS:func=1;break;
				case OP_BIGGERE:func=2;break;
				case OP_LESSE:func=3;break;
				case OP_EQUAL:func=4;break;
				case OP_NEQUAL:func=5;break;
				default:break;
			}
			int reg1=this->child->gen_node_asm(),reg2=this->child->sibling->gen_node_asm();
			regstat[reg1] = false;
			regstat[reg2] = false;
			if (reg1 == 0)
			{	
				cout<<"\tmovl\t";
				prin(this->child,1);
				cout<<",%eax\n";
			}
			if(reg2==0)
			{
				cout<<"\tcmp\t";
				prin(this->child->sibling,1);
				cout<<","<<regname[reg1]<<endl;
			}
			else
			{
				cout<<"\tcmp\t"<<regname[reg2]<<","<<regname[reg1]<<endl;
				regstat[reg2]=false;
			}
			reg=giveme_reg();
			string truela=new_label(),nextla=new_label();
			cout<<"\t"<<ys[func]<<"\t"<<truela<<endl<<"\tmovl\t$0,"<<regname[reg]<<"\n\tjmp\t"<<nextla<<endl<<truela<<":\tmovl\t$1,"<<regname[reg]<<"\n"<<nextla<<":";
		}
		else if(this->optype==OP_NOT)
		{
			reg=this->child->gen_node_asm();
			regstat[reg] = false;
			if (reg == 0)
			{
				cout<<"\tmovl\t";
				prin(this->child,1);
				cout<<",%eax"<<endl;
			}
			else
				cout << "\tmovl\t" << regname[reg] << ",%eax\n";
			cout << "\tcmp\t$0,%eax\n";
			reg=giveme_reg();
			string truela=new_label(),nextla=new_label();
			cout<<"\tje\t"<<truela<<endl<<"\tmovl\t$0,"<<regname[reg]<<"\n\tjmp\t"<<nextla<<endl<<truela<<":\tmovl\t$1,"<<regname[reg]<<"\n"<<nextla<<":";
		}
		else if(this->optype==OP_SELFPLUS)
			cout<<"SELFPULS\t";
		else if(this->optype==OP_MOD)
			cout<<"MOD\t";
		else if(this->optype==OP_PLUSE || this->optype==OP_MINUSE)
		{
			string choice[2] = {"addl", "subl"};
			int reg2 = this->child->sibling->gen_node_asm();
			int c;
			switch (this->optype)
			{
				case OP_PLUSE:c = 0;
					break;
				case OP_MINUSE:
					c = 1;
					break;
				default:
					break;
				}
			if(reg2==0)
			{
				cout << "\tmovl\t";
				prin(this->child->sibling, 0);
				cout << ","<<regname[0]<<"\n";
			}
			cout << "\t" << choice[c] << "\t"<<regname[reg2]<<",";
			prin(this->child,1);
			cout << endl;
			regstat[reg2] = false;
		}
		else if(this->optype==OP_PP)
		{
			cout << "\tmovl\t";
			prin(this->child, 0);
			cout << ",%eax\n";
			cout << "\tadd\t$1,%eax\n";
			cout << "\tmovl\t%eax,";
			prin(this->child, 0);
			cout << "\n";
		}
		else if(this->optype==OP_MM)
			this->child->gen_node_asm();
		else if(this->optype==OP_P)
			this->child->gen_node_asm();
		else if(this->optype==OP_M)
			this->child->gen_node_asm();
	}
	else if(this->nodeType==NODE_STMT)
	{
		if(this->stype==STMT_DECL)
		{
			TreeNode* crr;
			crr=this->child->sibling;
			reg=crr->gen_node_asm();
			regstat[reg] = false;
		}
		else if(this->stype==STMT_FOR)
		{
			this->child->child->gen_node_asm();
			this->child->child->sibling->gen_node_asm();
			this->child->sibling->gen_node_asm();
			this->child->child->sibling->sibling->gen_node_asm();
		}
		else if(this->stype==STMT_ASSIGN)
		{
			reg=this->child->sibling->gen_node_asm();
			if(reg==0)
			{
				cout<<"\tmovl\t";
				prin(this->child->sibling,1);
				cout<<","<<regname[reg]<<endl;
			}
			cout<<"\tmovl\t"<<regname[reg]<<",";
			prin(this->child,1);
			regstat[reg]=false;
			cout<<endl;			
		}
		else if(this->stype==STMT_WHILE)
		{
			this->child->gen_node_asm();
			this->child->sibling->gen_node_asm();
			
		}
		else if(this->stype==STMT_IF)
		{
			this->child->gen_node_asm();
			this->child->sibling->gen_node_asm();
		}
		else if(this->stype==STMT_IFBODY)
		{
			this->child->gen_node_asm();
			if(this->child->sibling)
				this->child->sibling->gen_node_asm();
		}
		else if(this->stype==STMT_ELSE)
		{
			TreeNode *crr = this->child;
			while (crr)
			{
				crr->gen_node_asm();
				crr = crr->sibling;
			}
		}
		else if(this->stype==STMTS)
		{
			TreeNode* t=this->child;
			while(t!=nullptr)
			{
				int reg1=t->gen_node_asm();
				regstat[reg1] = false;
				t = t->sibling;
			}
		}
		else if(this->stype==STMT_FOR)
			cout<<"FOR\t";
		else if(this->stype==STMT_PRINTF)
		{
			TreeNode *crr = this->child;
			TreeNode *sonarray[10];
			int sid = 0;
			while (crr != nullptr)
			{
				sonarray[sid] = crr;
				crr->gen_node_asm();
				crr = crr->sibling;
				sid++;
			}
			for (int i = sid - 1; i >= 0;i--)
			{
				cout << "\tpushl\t";
				if (i != 0)
					prin(sonarray[i], 1);
				else
					cout << "$STR"<< sonarray[0]->stringid;
				cout << endl;
			}
			cout << "\tcall\tprintf\n\taddl\t$" << sid * 4 << ",%esp\n";
		}
		else if(this->stype==STMT_SCANF)
		{
			TreeNode *crr = this->child;
			TreeNode *sonarray[10];
			int sid = 0;
			while (crr!=nullptr)
			{
				sonarray[sid] = crr;
				crr = crr->sibling;
				sid++;
			}
			for (int i = sid - 1; i >= 0;--i)
			{
				cout << "\tpushl\t";
				if (i != 0)
					prin(sonarray[i], 0);
				else
					cout <<"$STR"<<sonarray[i]->stringid;
				cout << endl;
			}
			cout << "\tcall\tscanf\n\taddl\t$"<<sid*4<<",%esp\n";
		}
	}
	else if(this->nodeType==NODE_STMT)
	{
		this->child->gen_node_asm();
		if(this->child->sibling!=nullptr)
			this->child->sibling->gen_node_asm();
	}
	else if(this->nodeType==NODE_IDLIST)
	{
		if(this->child)
		{
			reg=this->child->gen_node_asm();
			regstat[reg] = false;
		}
		if (this->child->sibling != nullptr)
		{
			reg=this->child->sibling->gen_node_asm();
			regstat[reg] = false;
		}
	}
	else
	{}
	if(this->label.true_label!="")
	{
		if(reg==0)
		{
			reg=giveme_reg();
			cout<<"\tmovl\t";
			prin(this,1);
			cout<<","<<regname[reg]<<endl;
		}
		cout<<"\tcmp\t$0,"<<regname[reg]<<endl;
		cout<<"\tjne\t"<<this->label.true_label<<endl;
		cout<<"\tjmp\t"<<this->label.false_label<<endl;
		regstat[reg]=false;
	}
	if(this->label.next_label!="")
		cout<<"\tjmp\t"<<this->label.next_label<<endl;
	return reg;
}
extern int idn;
extern vector<string> idli;
void printinfo()
{
	cout << ".text\n.globl main\nmain:\n\tpushl\t%ebp\n\tmovl\t%esp,%ebp\n";
}

void TreeNode::gen_asm()
{
	printinfo();
	TreeNode* crr;
	crr=this->child->child;
	while(crr!=nullptr)
	{
		//cout<<"+1"<<crr->nodeID;
		crr->gen_node_asm();
		crr=crr->sibling;
	}
	cout<<"\tpopl\t%ebp\n\tret\n.section .note.GNU-stack,\"\",@progbits\n";
}




void typeCheck(TreeNode *t){
	
	if(t->nodeType==NODE_STMT)
	{
		if(t->stype==STMT_WHILE)
		{
			if(t->child->type->type!=VALUE_BOOL && t->child->type->type!=VALUE_INT)
			{
				cout<<"Bad bool type at line "<<t->lineno;
				exit(1);
			}
		}
		else if(t->stype==STMT_IF)
		{
			if(t->child->type->type!=VALUE_BOOL && t->child->type->type!=VALUE_INT)
			{
				cout<<"Bad bool type at line "<<t->lineno;
				exit(1);
			}
		}
		else if(t->stype==STMT_FORCON)
		{
			if(t->child->sibling->type->type!=VALUE_BOOL && t->child->sibling->type->type!=VALUE_INT)
			{
				cout<<"Bad bool type at line "<<t->lineno;
				exit(1);
			}
		}
	}	
	
}


string TreeNode::sType2String(StmtType type) {
    return "?";
}


string TreeNode::nodeType2String (NodeType type){
    return "<>";
}
