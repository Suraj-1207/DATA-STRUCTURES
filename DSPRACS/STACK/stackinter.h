typedef struct
{	int top,size;
	char a[20];
}stack;

void initialise(stack *s);
int isEmpty(stack *s);
int isFull(stack *s);
void push(stack *s,char x);
char pop(stack *s);
void disp(stack *s);
int precedence(char x);
void convert(char in[20],char post[20],stack *s);
int evaluate(char post[20],stack *s);
