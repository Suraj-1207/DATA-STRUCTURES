#include"BFSImpl.h"

void main(){
	cityADT c;
	
	c.NoC=0;
	create(&c);
	int option;
	do{
		printf("\n Wassup?\n 1.Display graph\n 2.Perform BFS\n");
		printf(" 3.Check connection\n 0.Exit\n Your choice: ");
		scanf("%d",&option);
		
		if(option==1){
			disp(&c);
		}
		else if(option==2){
			BFS(&c);
		}
		else if(option==3){
			char source[100],dest[100];
			printf("Enter source: ");scanf(" %[^\n]",source);
			printf("Enter destination: ");scanf(" %[^\n]",dest);
			
			if(connect(&c,source,dest))
				printf("\n There exists a connection from %s to %s\n",source,dest);
			else
				printf("\n There does not exist a connection from %s to %s\n",source,dest);
		}
		else if(option)
			printf("\nInvalid input\n");
		else;
	}while(option);				
}
