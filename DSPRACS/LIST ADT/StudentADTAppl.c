
#include<stdio.h>
#include"StudentADTImpl.h"
#include"StudentADTInter.h"
void main()
{	listADT l;
	student x,*f;
	initialise(&l);
	int i,o,r,ct;
	char name[20],opt;
	do
	{	printf("MENU:\n 1.Insert front \n 2.Insert at end \n 3.Insert regno \n 4.Search regno \n 5.Search regname \n 6.Delete \n 7.Compute result \n 8.Students passed \n 9.First class \n 10.Display list \n ");
		printf("Choose an option:");
		scanf("%d",&o);
		switch(o)
		{	case 1:	printf("enter the name of the new student:");
					scanf("%s",&x.name);
					printf("enter regno:");
					scanf("%d",&x.regno);
					printf("enter marks of three subjects");
					scanf("%d %d %d",&x.m1,&x.m2,&x.m3);
					insertFront(&l,x);
					break;
			case 2:	printf("enter the name of the new student:");
					scanf("%s",&x.name);
					printf("enter regno:");
					scanf("%d",&x.regno);
					printf("enter marks of three subjects");
					scanf("%d %d %d",&x.m1,&x.m2,&x.m3);
					insertEnd(&l,x);
					break;
			case 3:	printf("enter the name of the new student:");
					scanf("%s",&x.name);
					printf("enter regno:");
					scanf("%d",&x.regno);
					printf("enter marks of three subjects");
					scanf("%d %d %d",&x.m1,&x.m2,&x.m3);
					printf("enter regno after which record has to be added:");
					scanf("%d",&r);
					insertRegno(&l,x,r);
					break;
			case 4:	printf("enter regno of record which has to be found:");
					scanf("%d",&r);
					x=searchRegno(&l,r);
					display(x);
					break;
			case 5:	printf("enter name whose records have to be found:");
					scanf("%s",&name);
					f=searchRegname(&l,name);
					i=0;
					//for(i=0;f[i]!=0;i++)
					//	display(f[i]);

					break;
			case 6:	printf("enter regno of record which has to be deleted:");
					scanf("%d",&r);
					delete(&l,r);
					break;
			case 7:	computeResult(&l);
					break;
			case 8:	f=listResult(&l);
					//for(i=0;f[i]!=0;i++)
					//	display(f[i]);
					break;
			case 9:	ct=listClass(&l);
					printf("%d students have passed with first class \n",ct);
					break;
			case 10:	for(i=0;i<l.size;i++)
							display(l.a[i]);
						break;
			case 11:	printf("exiting..... \n");
						break;
		}
		scanf("%c",&opt);
		printf("do you want to continue:");
		scanf("%c",&opt);
	}while(opt!='n'&&opt!='N');
}
