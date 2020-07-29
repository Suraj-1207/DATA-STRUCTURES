#include<stdio.h>
#include<stdlib.h>
#include"sort.h"

void main()
{
	numADT *N=init();
	int ch,a[10],x;
	
	do
	{
		printf("\nMenu:\n1.Insert\n2.Selection sort\n3.Shell Sort\n4.Display\n5.Exit\nChoice: ");
		scanf("%d",&ch);
		int i;		
		switch(ch)
		{
			case 1:
				printf("Enter size of the array: ");
				scanf("%d",&x);
				for(i=0;i<x;i++)
					scanf("%d",&a[i]);
				insert(N,a,x);
				break;
			case 2:
				selSort(N);
				break;
			case 3:
				shellSort(N);
				break;
			case 4:
				display(N);
			
		}		
	}while(ch!=5);	
	
}


