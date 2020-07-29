#include "PriorQueueIf.h"
#include "PriorQueueImpl.h"

int main() {
    pq *p;
    int max,choice;
    printf("Enter the size of Heap : ");
    scanf("%d",&max);
    p = init(max);
    do{
        printf("DRIVER-MENU:\n\t1 - Insert\n\t2 - Delete\n\t3 - Veiw\n\nEnter Your Choice :");
        scanf("%d",&choice);
        switch(choice) {
            case 1: {
                emp mx=input();
                insert(p,mx);
                break;
            }
            case 2:{
                emp x=Delete(p);
                if(x.sal!=INT_MIN)
                    printf("Deleted : (%d)-(%s)\n",x.id,x.name);
                break;
            }
            case 3: disp(p,1,0);break;
        }
    }while(choice);
    printf("EXITING......");
    return 0;
}
