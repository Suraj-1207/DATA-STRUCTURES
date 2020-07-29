#include<stdio.h>
#include<string.h>
typedef struct
{	int regno,m1,m2,m3,total;
	char name[20],result;
}student;
typedef struct
{	student a[20];
	int size;
}listADT;

void initialise(listADT *l)
{	l->size=0;
}
void display(student s)
{	printf("Name:%s \n",s.name);
	printf("Regno:%d \n",s.regno);
	printf("Result:%c \n",s.result);
}
void insertFront(listADT *l,student s)
{	int i;
	for(i=l->size;i>0;i--)
		l->a[i]=l->a[i-1];
	l->a[0]=s;
	l->size+=1;
}
void insertEnd(listADT *l,student s)
{	l->a[l->size]=s;
	l->size+=1;
}
void insertRegno(listADT *l,student s,int r)
{	int i,j;
	for(i=0;i<l->size;i++)
	{	if((l->a[i]).regno==r)
		{	for(j=l->size;j>i+1;j--)
				l->a[j]=l->a[j-1];
		l->a[i+1]=s;
		l->size+=1;
		break;
		}
	}
}
student searchRegno(listADT *l,int r)
{	int i=0;
	for(i=0;i<l->size;i++)
	{	if((l->a[i]).regno==r)
			return l->a[i];
	}
}
student *searchRegname(listADT *l,char Name[20])
{	int i=0,ct=0;
	student find[10];
	computeResult(&l);
	for(i=0;i<l->size;i++)
	{	if(strcmp((l->a[i]).name,Name)==0)
		{	find[ct]=l->a[i];
			display(find[ct]);
			ct++;

		}
	}
	return find;
}
void delete(listADT *l,int r)
{	int i=0,j;
	for(i=0;i<l->size;i++)
	{	if((l->a[i]).regno==r)
		{	display(l->a[i]);
			for(j=i;j<l->size-1;j++)
				l->a[j]=l->a[j+1];
			l->size-=1;
		}
	}
}
void computeResult(listADT *l)
{	int i=0;
	for(i=0;i<l->size;i++)
	{	(l->a[i]).total=(l->a[i]).m1+(l->a[i]).m2+(l->a[i]).m3;
		if(l->a[i].m1<50||l->a[i].m2<50||l->a[i].m3<50)
			(l->a[i]).result='F';
		else if((l->a[i]).total/3<85)
			(l->a[i]).result='D';
		else
			(l->a[i]).result='O';
	}
}
student *listResult(listADT *l)
{	int i=0,ct=0;
	student find[10];
	for(i=0;i<l->size;i++)
	{	if((l->a[i]).result!='F')
		{	find[ct]=l->a[i];
			display(find[ct]);
			ct+=1;
		}
	}
	return find;
}
int listClass(listADT *l)
{	int i=0,ct=0;
	for(i=0;i<l->size;i++)
	{	if((l->a[i]).result=='O')
			ct+=1;
	}
	return ct;
}


			

