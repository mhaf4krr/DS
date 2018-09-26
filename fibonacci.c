#include<stdio.h>

/* 0 1 1 2 3 5 8 . . . */

int fibonacci(int n){

    if(n==1)
    return 0;

    if(n==2 || n==3){
        return 1;
    }

    else{

       int p1,p2,answer;
       p1=1;p2=1;
       for(int i=4;i<=n;i++)
       {
           answer = p1+p2;
           p1=p2;
           p2=answer;
       }

       return answer;
    }
}
int main(){
    while(1)
    {
    
        int temp;

        printf("\n\nEnter the location ?\n");
        scanf("%d",&temp);

        printf("Element in Location %d : %d",temp,fibonacci(temp));
    }
}