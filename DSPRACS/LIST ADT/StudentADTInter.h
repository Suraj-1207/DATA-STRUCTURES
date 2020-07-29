
#include<stdio.h>
void initialise(listADT *l);
void display(student s);
void insertFront(listADT *l,student s);
void insertEnd(listADT *l,student s);
void insertRegno(listADT *l,student s,int r);
student searchRegno(listADT *l,int r);
student *searchRegname(listADT *l,char Name[20]);
void delete(listADT *l,int r);
void computeResult(listADT *l);
student *listResult(listADT *l);
int listClass(listADT *l);