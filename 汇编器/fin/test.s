.bss
		.zero 4
	a1:
		.align 4
		.zero 4
	s2:
		.align 4
		.zero 4
	ch3:
		.align 4
		.zero 4
	a4:
		.align 4
		.zero 4
	b5:
		.align 4
		.zero 4
	i6:
		.align 4
.text
.globl main
main:
	pushl	%ebp
	movl	%esp,%ebp
	movl	$10,%eax
	movl	%eax,a1
	movl	$0,%eax
	movl	%eax,s2
	pushl	$ch3
	pushl	$STR0
	call	scanf
	addl	$8,%esp
l1:	movl	$0,%eax
	andl	a1,%eax
	movl	%eax,%ebx
	movl	a1,%eax
	cmp	%ebx,%eax
	jg	l83343
	movl	$0,%ebx
	jmp	l93343
l83343:	movl	$1,%ebx
l93343:	cmp	$10,%ebx
	jle	l04343
	movl	$0,%ebx
	jmp	l14343
l04343:	movl	$1,%ebx
l14343:	mov	$100,%ecx
	movl	a1,%eax
	pushl	%edx
	movl	$0,%edx
	idivl	%ecx
	movl	%edx,%ecx
	popl	%edx
	movl	a1,%eax
	cmp	$0,%eax
	je	l24343
	movl	$0,%edx
	jmp	l34343
l24343:	movl	$1,%edx
l34343:	movl	$10,%eax
	andl	%edx,%eax
	movl	%eax,%edx
	cmp	%edx,%ecx
	je	l44343
	movl	$0,%ecx
	jmp	l54343
l44343:	movl	$1,%ecx
l54343:	cmp	$10,%ecx
	je	l64343
	movl	$0,%ecx
	jmp	l74343
l64343:	movl	$1,%ecx
l74343:	movl	%ebx,%eax
	orl	%ecx,%ebx
	movl	%eax,%ebx
	cmp	$0,%ebx
	jne	l29123
	jmp	l39123
l29123:	movl	$1,%eax
	subl	%eax,a1
	movl	$10,%eax
	movl	%eax,a4
	movl	$a4,%eax
	addl	%eax,s2
	movl	$0,%ebx
	subl	s2,%ebx
	movl	$0,%ecx
	subl	$10,%ecx
	cmp	%ecx,%ebx
	jl	l84343
	movl	$0,%ebx
	jmp	l94343
l84343:	movl	$1,%ebx
l94343:	cmp	$0,%ebx
	jne	l53343
	jmp	l73343
l53343:	pushl	s2
	pushl	$STR1
	call	printf
	addl	$8,%esp
	movl	$10,%eax
	movl	%eax,b5
	movl	$0,%eax
	movl	%eax,i6
l13343:	movl	i6,%eax
	cmp	b5,%eax
	jl	l05343
	movl	$0,%ebx
	jmp	l15343
l05343:	movl	$1,%ebx
l15343:	cmp	$0,%ebx
	jne	l23343
	jmp	l33343
l23343:	pushl	i6
	pushl	$STR2
	call	printf
	addl	$8,%esp
	jmp	l43343
l43343:	movl	$i6,%eax
	add	$1,%eax
	movl	%eax,$i6
	jmp	l13343
l33343:	jmp	l73343
l73343:	jmp	l1
l39123:	popl	%ebp
	ret
.section .note.GNU-stack,"",@progbits

start printing IRcode.
(assign, 10, , a)
(assign, 0, , s)
(call, scanf, "%d", &ch, )
(label, L0, , )
(if, a>0 && a<=10 || a%100==10 && !a==10, , L1)
(jump, L0, , loop)
(label, L1, , )
(declare, a, , )
(assign, 10, , a)
(if, -s < -10, , L2)
(jump, L3, , )
(label, L2, , )
(call, printf, "result is: %d\n", s, )
(declare, b, , )
(assign, 10, , b)
(assign, int i=0, , )
(label, L4, , )
(if, i<b, , L5)
(jump, L6, , )
(label, L5, , )
(assign, i++, , )
(jump, L4, , )
(label, L6, , )
(call, printf, "Have fun: %d\n", i, )
