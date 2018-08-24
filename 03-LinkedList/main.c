#include"LinkedList.h"

Node* ROOT=NULL;
Node* ROOT2=NULL;
Node* MERGEROOT=NULL;



int main()
{
    while(1)
    {
        int option;
        printf("\n\n1.Create a List 1\n2.Display List\n3.Insert at the End\n4.Insert at Front\n5.Insert Element at a position\n6.Create List 2\n7.Display List 2\n8.Merge List 1 and List 2\n9.Reverse List 2(Recursion)\n10.Reverse Itterative List1\n\n");
        scanf("%d",&option);

        switch(option)
        {char askUser;
            case 1:
            do{
                printf("\nEnter the data\n");
                int data;
                scanf("%d",&data);
                ROOT=insertElementEnd(data,ROOT);
                printf("\nContinue [Y|N}\n");
                scanf(" %c",&askUser);
            }while(askUser=='Y' || askUser=='y');
            break;

            case 2:DisplayList(ROOT);
            break;

            case 4:printf("\nEnter the data\n");
            int data1;
            scanf("%d",&data1);
            ROOT=insertBegin(data1,ROOT);
            break;

            case 5:printf("\nEnter the data to be inserted and the positon\n");
            int data,position;
            scanf("%d",&data);
            scanf("%d",&position);
            insertElement(data,position,ROOT);
            break;

            
            case 6:
            do{
                printf("\nEnter the data\n");
                int data3;
                scanf("%d",&data3);
                ROOT2=insertElementEnd(data3,ROOT2);
                printf("\nContinue [Y|N}\n");
                scanf(" %c",&askUser);
            }while(askUser=='Y' || askUser=='y');
            break;

            case 7:DisplayList(ROOT2);
            break;

            case 8:MERGEROOT=Mergefunction(ROOT,ROOT2);
            DisplayList(MERGEROOT);
            break;

            case 9:ROOT2=Reverse(NULL,ROOT2);
            break;

            case 10:ROOT=ReverseItterate(ROOT);
            break;
        }
    }
}