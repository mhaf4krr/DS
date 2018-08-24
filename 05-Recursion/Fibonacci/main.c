#include<stdio.h>

int Fibonacci(int position)//it is actually the position in the series
{
    if(position==0 || position==1)
    return position;

    else
    return (Fibonacci(position-1)+Fibonacci(position-2));
}

int main()
{
    for(int i=0;i<10;i++)
    {
        printf("%d -> ",Fibonacci(i));
    }
}