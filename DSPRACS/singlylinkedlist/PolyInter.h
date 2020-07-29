typedef struct term
{	int val,exp;

}term;

typedef struct polyADT
{	term t;
	struct polyADT *next;
}polyADT;

void initialise(polyADT *p);
void read(int n,int v[],int e[],polyADT *p);
void print(polyADT *p);
void insertFront(polyADT *p,term x);
void insertEnd(polyADT *p,term x);
void insertAfterTerm(polyADT *p,term x,int e);
void polyAdd(polyADT *p1, polyADT *p2);
void polyMul(polyADT *p1, polyADT *p2);
void polyDegree(polyADT  *p);
int polyEvaluate(polyADT  *p);
polyADT polySimplify(polyADT  *p);