#include"digkstraimpl.h"
void main()
{
	char s[100],d[100];
	cityADT *c;
	int ch;
	do
	{
		printf("\nMenu:\n1.Create\n2.Display\n3.Dijkstra output\n4.Check connectivity\n5.exit\nChoice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :c=create(c);
					break;
			case 2 :disp(c);
					break;
			case 3 :printf("Enter Starting Node: ");
					scanf("%s",s);
					DijkstraAlgo(c,s);break;
			case 4 :printf("Enter source and destination cities: \n");
					scanf("%s",s);
					scanf("%s",d);
					shortestPath(c,s,d);
					break;
		}
	}while(ch!=5);
}


