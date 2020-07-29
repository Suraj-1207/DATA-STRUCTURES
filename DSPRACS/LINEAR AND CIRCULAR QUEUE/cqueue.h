typedef struct
{	int a[5];
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
{	if(q->size==5)
		return 1;
	else 
		return 0;
}
void enqueue(queue *q,int x)
{	if(q->r==-1)
	{	q->f=q->r=0;
		q->a[q->r]=x;
		q->size+=1;
	}
	else if(isfull(q))
		printf("queue is full\n");
	else if(q->r==4)
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

int dequeue(queue *q)
{	if(isempty(q))
	{	printf("queue is empty\n");
		return -1;
	}
	else if(q->f==4)
	{	q->f=0;
		q->size-=1;
		return(q->a[4]);
	}
	else
	{	q->f++;
		q->size-=1;
		return(q->a[q->f-1]);
	}
}

void disp(queue *q)
{	if(isempty(q))
		printf("queue is empty\n");
	else
	{	int i;
		printf("queue elements:");
		if(q->r>=q->f)
		{	for(i=q->f;i<=q->r;i++)
			{	printf("%d",q->a[i]);
			}
			printf("\n");
		}
		else
		{	for(i=q->f;i<=4;i++)
				printf("%d",q->a[i]);
			
			for(i=0;i<=q->r;i++)
				printf("%d",q->a[i]);
		}

	}
}


