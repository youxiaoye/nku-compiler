#include "Ast.h"
#include "SymbolTable.h"
#include <string>
#include "Type.h"

extern FILE *yyout;
int Node::counter = 0;

Node::Node()
{
    seq = counter++;
}

void Ast::output()
{
    fprintf(yyout, "start printing syntax tree:\n");
    fprintf(yyout, "Program\n");
    if (root != nullptr)
        root->output(1, "|--- ");
}

void BinaryExpr::output(int level, const std::string& prefix)
{
    std::string op_str;
    switch (op)
    {
        case ADD: op_str = "add"; break;
        case SUB: op_str = "sub"; break;
        case AND: op_str = "and"; break;
        case OR: op_str = "or"; break;
        case LESS: op_str = "less"; break;
        case MORE: op_str = "more"; break;
        case MOREEQUAL: op_str = "moreequal"; break;
        case LESSEQUAL: op_str = "lessequal"; break;
        case EQUAL: op_str = "equal"; break;
        case NOEQUAL: op_str = "noequal"; break;
        case DIV: op_str = "div"; break;
        case MUL: op_str = "mul"; break;
        case PERC: op_str = "mod"; break;
    }
    fprintf(yyout, "%sBinaryExpr\t op: %s\n", prefix.c_str(), op_str.c_str());
    expr1->output(level + 1, prefix + "|--- ");
    expr2->output(level + 1, prefix + "|--- ");
}

void SignleExpr::output(int level, const std::string& prefix)
{
    std::string op_str;
    
    // 根据操作类型选择输出字符串
    switch (op)
    {
        case SUB:              op_str = "negative"; break;
        case ADD:              op_str = "positive"; break;
        case EXCLAMATION:      op_str = "anti"; break;
        case PRE_INCREMENT:    op_str = "pre-increment"; break;
        case PRE_DECREMENT:    op_str = "pre-decrement"; break;
        case POST_INCREMENT:   op_str = "post-increment"; break;
        case POST_DECREMENT:   op_str = "post-decrement"; break;
        default:               op_str = "unknown"; break;
    }

    // 打印操作符信息
    fprintf(yyout, "%sSignleExpr\t op: %s\n", prefix.c_str(), op_str.c_str());

    // 打印表达式（操作数）的信息
    expr->output(level + 1, prefix + "|--- ");
}


void Constant::output(int level, const std::string& prefix)
{
    std::string type, value;
    type = symbolEntry->getType()->toStr();
    value = symbolEntry->toStr();
    fprintf(yyout, "%sIntegerLiteral\t value: %s\t type: %s\n", prefix.c_str(), value.c_str(), type.c_str());
}

void ConstId::output(int level, const std::string& prefix)
{
    std::string name, type;
    int scope;
    name = symbolEntry->toStr();
    type = symbolEntry->getType()->toStr();
    scope = dynamic_cast<IdentifierSymbolEntry*>(symbolEntry)->getScope();
    fprintf(yyout, "%sConstId\t name: %s\t scope: %d\t type: %s\n", prefix.c_str(), name.c_str(), scope, type.c_str());
}

void Id::output(int level, const std::string& prefix)
{
    std::string name, type;
    int scope;
    name = symbolEntry->toStr();
    type = symbolEntry->getType()->toStr();
    scope = dynamic_cast<IdentifierSymbolEntry*>(symbolEntry)->getScope();
    fprintf(yyout, "%sId\t name: %s\t scope: %d\t type: %s\n", prefix.c_str(), name.c_str(), scope, type.c_str());
}

void FuncFParam::output(int level, const std::string& prefix)
{
    std::string name, type;
    int scope;
    name = symbolEntry->toStr();
    type = symbolEntry->getType()->toStr();
    scope = dynamic_cast<IdentifierSymbolEntry*>(symbolEntry)->getScope();
    fprintf(yyout, "%sFuncFParam\t name: %s\t scope: %d\t type: %s\n", prefix.c_str(), name.c_str(), scope, type.c_str());
}

void CompoundStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sCompoundStmt\n", prefix.c_str());
    stmt->output(level + 1, prefix + "|--- ");
}

void SeqNode::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sSequence\n", prefix.c_str());
    stmt1->output(level + 1, prefix + "|--- ");
    stmt2->output(level + 1, prefix + "|--- ");
}

void BreakStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sBreakStmt\n", prefix.c_str());
}

void ContinueStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sContinueStmt\n", prefix.c_str());
}

void DeclStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sDeclStmt\n", prefix.c_str());
    ids->output(level + 1, prefix + "|--- ");
}

void ConstDeclStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sConstDeclStmt\n", prefix.c_str());
    Cids->output(level + 1, prefix + "|--- ");
}

void IfStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sIfStmt\n", prefix.c_str());
    cond->output(level + 1, prefix + "|--- ");
    thenStmt->output(level + 1, prefix + "|--- ");
}

void IfElseStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sIfElseStmt\n", prefix.c_str());
    cond->output(level + 1, prefix + "|--- ");
    thenStmt->output(level + 1, prefix + "|--- ");
    elseStmt->output(level + 1, prefix + "|--- ");
}

void ReturnStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sReturnStmt\n", prefix.c_str());
    retValue->output(level + 1, prefix + "|--- ");
}

void AssignStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sAssignStmt\n", prefix.c_str());
    lval->output(level + 1, prefix + "|--- ");
    expr->output(level + 1, prefix + "|--- ");
}

void FunctionDef::output(int level, const std::string& prefix)
{
    std::string name, type;
    name = se->toStr();
    type = se->getType()->toStr();
    fprintf(yyout, "%sFunctionDefine function name: %s, type: %s\n", prefix.c_str(), name.c_str(), type.c_str());
    if (FPs != nullptr)
    {
        FPs->output(level + 1, prefix + "|--- ");
    }
    stmt->output(level + 1, prefix + "|--- ");
}

void FunctionCall::output(int level, const std::string& prefix)
{
    std::string name, type;
    name = symbolEntry->toStr();
    type = symbolEntry->getType()->toStr();
    fprintf(yyout, "%sFuncCall\t name: %s\t type: %s\n", prefix.c_str(), name.c_str(), type.c_str());
    if (RPs != nullptr)
    {
        RPs->output(level + 1, prefix + "|--- ");
    }
}

void WhileStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sWhileStmt\n", prefix.c_str());
    cond->output(level + 1, prefix + "|--- ");
    loop->output(level + 1, prefix + "|--- ");
}

void IdList::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sIdList\n", prefix.c_str());
    for (long unsigned int i = 0; i < Ids.size(); i++)
    {
        Ids[i]->output(level + 1, prefix + "|--- ");
    }
    for (long unsigned int i = 0; i < Assigns.size(); i++)
    {
        Assigns[i]->output(level + 1, prefix + "|--- ");
    }
}

void ConstIdList::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sConstIdList\n", prefix.c_str());
    for (long unsigned int i = 0; i < CIds.size(); i++)
    {
        CIds[i]->output(level + 1, prefix + "|--- ");
        Assigns[i]->output(level + 1, prefix + "|--- ");
    }
}

void FuncFParams::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sFuncFParams\n", prefix.c_str());
    for (long unsigned int i = 0; i < FPs.size(); i++)
    {
        FPs[i]->output(level + 1, prefix + "|--- ");
    }
    for (long unsigned int i = 0; i < Assigns.size(); i++)
    {
        Assigns[i]->output(level + 1, prefix + "|--- ");
    }
}

void FuncRParams::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sFuncRParams\n", prefix.c_str());
    for (long unsigned int i = 0; i < Exprs.size(); i++)
    {
        Exprs[i]->output(level + 1, prefix + "|--- ");
    }
}

void Empty::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sEmpty Statement\n", prefix.c_str());
}

void SignleStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sSignle Statement\n", prefix.c_str());
    expr->output(level + 1, prefix + "|--- ");
}
void ForStmt::output(int level, const std::string& prefix)
{
    fprintf(yyout, "%sForStmt\n", prefix.c_str());

    // 输出初始化语句
    if (init != nullptr) {
        fprintf(yyout, "%s|--- InitStmt\n", prefix.c_str());
        init->output(level + 1, prefix + "|   |--- ");
    }

    // 输出条件表达式
    if (cond != nullptr) {
        fprintf(yyout, "%s|--- Condition\n", prefix.c_str());
        cond->output(level + 1, prefix + "|   |--- ");
    }

    // 输出迭代语句
    if (update != nullptr) {
        fprintf(yyout, "%s|--- IterationStmt\n", prefix.c_str());
        update->output(level + 1, prefix + "|   |--- ");
    }

    // 输出循环体
    if (loop != nullptr) {
        fprintf(yyout, "%s|--- Body\n", prefix.c_str());
        loop->output(level + 1, prefix + "|   |--- ");
    }
}

