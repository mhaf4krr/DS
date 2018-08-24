#include<stdio.h>

void move(int disks,char source,char destination,char spare)
{
    if(disks==1)
    {
        printf("\n Move:%c to %c\n",source,destination);
    }

    else{
        move(disks-1,source,spare,destination);
        move(1,source,destination,spare);
        move(disks-1,spare,destination,source);
    }
}
int main()
{
    int number;
    printf("Enter the number of Disks:");
    scanf("%d",&number);
    move(3,'A','C','B');
}