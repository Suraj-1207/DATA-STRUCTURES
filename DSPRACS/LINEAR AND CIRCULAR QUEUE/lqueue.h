typedef struct
{	int a[10];
	int f,r;
}queue;
void initialise(queue *q)
{	q->f=-1;
	q->r=-1;
}

int isempty(queue *q)
{	if(q->r==-1)
		return 1;
	else 
		return 0;
}

int isfull(queue *q)
{	if(q->r==9)
		return 1;
	else 
		return 0;
}
void enqueue(queue *q,int x)
{	if(isempty(q))
	{	q->f=q->r=0;
		q->a[q->r]=x;
	}
	else if(isfull(q))
		printf("queue is full\n");
	else
	{	q->r+=1;
		q->a[q->r]=x;
	}
}

int dequeue(queue *q)
{	if(isempty(q))
	{	printf("queue is empty\n");
		return -1;
	}
	else
	{	q->f++;
		return(q->a[q->f-1]);
	}
}

void disp(queue *q)
{	if(isempty(q))
		printf("queue is empty\n");
	else
	{	int i;
		printf("queue elements:");
		for(i=q->f;i<=q->r;i++)
		{	printf("%d",q->a[i]);
		}
		printf("\n");
	}
}


