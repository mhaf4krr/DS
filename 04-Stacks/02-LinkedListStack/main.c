#include "operations.h"
Node* top=NULL;
int main()
{
    while(1)
    {
        printf("\n\n1.Push\n2.Peep\n3.Pop\n4.Display\n");
        int option;
        scanf("%d",&option);
        switch(option)
        {
            case 1:printf("\nEnter the data:");
            int data;
            scanf("%d",&data);
            top=Push(top,data);
            break;

            case 3:top=Pop(top);
            break;

            case 2:printf("Top:%d",Peep(top));
            break;

            case 4:Display(top);
            break;
        }
    }
}
