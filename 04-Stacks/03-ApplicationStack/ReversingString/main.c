#include<stdio.h>
char str[50];
char Stack[50];
int top=-1;
void Push(char data)
{
    top++;
    if(top==50-1)
    {
        printf("\nOverflow!");
        return;
    }

    Stack[top]=data;
}

char Pop()
{
    char temp=Stack[top];
    top--;
    return temp;
}

int length(char* string)
{
    int count=0;
    int i=0;
    while(string[i]!=0)
    {
        count++;
        i++;
    }
    return count;
}

void Reverse(char* string)
{
    int i=0;
    int len=length(string);
    while(i<len)
    {
        Push(string[i]);
        i++;
    }

     i=0;
     while(i<len)
    {
        string[i]=Pop();
        i++;
    }

}

int main()
{
    printf("\nEnter the String:");
    fgets (str, 45, stdin);
    Reverse(str);
    printf("\nReversed String:%s",str);
}