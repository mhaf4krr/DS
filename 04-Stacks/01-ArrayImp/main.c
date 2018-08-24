#include<stdio.h>
int top=-1;
const int MAX=5;
int Stack[5];
void push(int data)
{
    top++;
    if(top==MAX-1)
    printf("\n\nOverflow!");

    Stack[top]=data;
}

int pop()
{
    if(top==-1)
    printf("\n\nUnderflow!");
    int temp=Stack[top];
    top--;
    return temp;
}

int peep()
{
    if(top==-1)
    printf("\nUnderflow");
    else return Stack[top];
}

void Display()
{
    int i=top;
    if(top==-1)
    printf("\nUnderflow!");
    while(i>=0)
    {
        printf("\n|%d|",Stack[i]);
        i--;
    }
}

int main()
{
    while(1)
    {
        printf("\n1.Push\n2.Peep\n3.Pop\n4.Display Stack\n");
        int option;
        scanf("%d",&option);

        switch(option)
        {
            case 1:printf("\nEnter the data to Push:");
            int data;
            scanf("%d",&data);
            push(data);
            break;

            case 2:printf("The value at top : %d",peep());
            break;

            case 3:printf("Element removed: %d",pop());
            break;

            case 4:Display();
            break;
        }
    }


}
