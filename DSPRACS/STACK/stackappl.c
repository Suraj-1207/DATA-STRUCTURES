#include<stdio.h>
#include<stdlib.h>
#include"stackinter.h"
#include"stackimpl.h"
void main()
{	char in[20],post[20];
	printf("enter infix expression:");
	scanf("%s",in);
	stack *s=malloc(sizeof(stack));
	stack *m=malloc(sizeof(stack));
	initialise(s);
	initialise(m);
	convert(in,post,s);
	int ans;
	ans=evaluate(post,m);
	printf("\nevaluated postfix expression result:%d",ans);
}
