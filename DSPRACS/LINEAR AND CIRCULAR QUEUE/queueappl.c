#include<stdio.h>
//#include"lqueue.h"
#include"cqueue.h"
#include<stdlib.h>

void main()
{	int i,n,x;
	queue *q=malloc(sizeof(queue));
	initialise(q);
	do
	{	printf(" 1.insert \n 2.delete \n 3.display \n");
		printf("choose an option:");
		scanf("%d",&n);
		if(n==1)
		{	printf("enter element to be added:");
			scanf("%d",&x);
			enqueue(q,x);
		}
		else if(n==2)
		{	x=dequeue(q);
			if(x!=-1)
				printf("the deleted element is:%d",x);
		}
		else if(n==3)
		{	disp(q);
		}
		else if(n==4)
			printf("exiting.... \n");
	}while(n!=4);
}
