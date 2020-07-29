typedef struct
{	char l;
	int h;
}job;

typedef struct
{	job a[10];
	int f,r,size;
}queue;
void initialise(queue *q)
{	q->f=-1;
	q->r=-1;
	q->size=0;
}

int isempty(queue *q)
{	if(q->size==0)
		return 1;
	else 
		return 0;
}

int isfull(queue *q)
{	if(q->size==10)
		return 1;
	else 
		return 0;
}
void enqueue(queue *q,job x)
{	if(q->r==-1)
	{	q->f=q->r=0;
		q->a[q->r]=x;
		q->size+=1;
	}
	else if(isfull(q))
		printf("queue is full\n");
	else if(q->r==9)
	{	q->r=0;
		q->a[q->r]=x;
		q->size+=1;
	}
	else
	{	q->r++;
		q->a[q->r]=x;
		q->size+=1;
	}
}



void disp(queue *q)
{	if(isempty(q))
		printf("queue is empty\n");
	else
	{	int i;
		printf("queue elements:\n");
		if(q->r>=q->f)
		{	for(i=q->f;i<=q->r;i++)
			{	printf("%c ",q->a[i].l);
				printf("%d ",q->a[i].h);
				printf("\n");
			}
			printf("\n");
		}
		else
		{	for(i=q->f;i<=9;i++)
			{	printf("%c ",q->a[i].l);
				printf("%d ",q->a[i].h);
			}
			for(i=0;i<=q->r;i++)
			{	printf("%c ",q->a[i].l);
				printf("%d ",q->a[i].h);
			}
			printf("\n");
		}

	}
}

int calctime(queue *q1,queue *q2)
{	int t1=0,t2=0,i;
	for(i=q1->f;i<=q1->r;i++)
		t1+=q1->a[i].h;
	for(i=q2->f;i<=q2->r;i++)
		t2+=q2->a[i].h;
	if(t1>t2)
		return 1;
	else
		return 2;
}

