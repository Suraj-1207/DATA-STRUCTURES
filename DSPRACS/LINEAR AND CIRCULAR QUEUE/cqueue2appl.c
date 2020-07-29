#include<stdio.h>
#include<stdlib.h>
#include"cqueuev2.h"


void main()
{	queue *q1=malloc(sizeof(queue));
	queue *q2=malloc(sizeof(queue));
	initialise(q1);
	initialise(q2);
	int i,n,h,temp;
	char l;
	printf("enter number of jobs:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	job x;
		printf("enter job name:");
		scanf(" %c",&x.l);
		printf("enter job hours");
		scanf("%d",&x.h);
		if(i==0)
			enqueue(q1,x);
		else if(i==1)
			enqueue(q2,x);
		else
		{	temp=calctime(q1,q2);
			if(temp==1)
				enqueue(q2,x);
			else
				enqueue(q1,x);
		}
	}
	printf("\n queue 1:\n");
	disp(q1);
	printf("\n queue 2:\n");
	disp(q2);
}
	
