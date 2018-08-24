#include<stdio.h>

int Factorial(int number)
{   
    
    if(number==1)
    {
      return 1;
    }

    else{
    return number*Factorial(number-1);
    }
}

int main()
{
    int number;
    printf("\nEnter the number:");
    scanf("%d",&number);

    printf("\nFactoiral:%d\n",Factorial(number));
}