#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"dllinter.h"
#include"dllimpl.h"

void main()
{	int opt;
	perADT *l=malloc(sizeof(perADT));
	perADT *l1=malloc(sizeof(perADT));	
	perADT *l2=malloc(sizeof(perADT));	
	initialise(l);
	person x;
	long int arr[10];
	char a[20];
	int ct=0,n,i,flag;
	do	
	{	
		printf("\n\nMENU: \n 1.insert front \n 2.insert end \n 3.insert after a pin \n 4.list senior people \n 5.locate people based on a location \n 6.sort list \n 7.display \n 8.show ratio \n 9.Exit\n");
		scanf("%d",&opt);
		long int o;
		switch(opt)
		{	
			case 1:
					x = accept();
					insertFront(l,x);
					break;
			case 2:
					x = accept();
					insertEnd(l,x);
					break;
			case 3:
					x = accept();
					printf("Enter the pin after which we need to add");
					scanf("%li",&o);
					insertPIN(l,x,o);
					break;
			case 4: 
					l1 = senior(l);
					display(l1);
					break;
			case 5:	printf("Enter City name to be searched");
					scanf(" %[^\n]",a);
					
					l2 = locate(l,a);
					display(l2);
					break;
			case 6:	printf("Details\n");
					sort(l);
					display(l);
					break;
			case 7: display(l);
					break;
			case 8: ratio(l);
					break;
			case 9: exit(0);
					break;
			default:printf("Invalid input\n");
		}
	}while(opt!=9);
}
	
		
		
		
		
		
