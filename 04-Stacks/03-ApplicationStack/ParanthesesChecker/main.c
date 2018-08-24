#include<stdio.h>
#include<string.h>

char expr[25];

char Stack[15];
int top=-1;

void Push(char data)
{
    top++;
    Stack[top]=data;
}

char Pop()
{
    char temp=Stack[top];
    top--;
    return temp;
}

void Display()
{
    for(int i=top;i>=0;i++)
    {
        printf("\n%c",Stack[i]);
    }
}

void Check(char* express)
{   
    for(int i=0;i<strlen(express);i++)
    {
        if(express[i]=='{'|| express[i]=='('|| express[i]=='[')
        { Push(express[i]);}

        // if(express[i]=='}'||express[i]==')'||express[i]==']')
        // {
        //     if(top==-1)//empty return 
        //     return;

        //     char temp=Stack[top];
        // }
         
    }
  
}

int main()
{
    printf("\nEnter the Expression:");
    fgets(expr,15,stdin);
    Check(expr);
    Display();
}