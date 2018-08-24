#include<stdio.h>

void fillArray(int *Array,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nEnter the number at index %d : ",i);
        scanf("%d",&Array[i]);
    }

    printf("\t\n Array Filled Now Search!\n\n");

    for(int i=0;i<size;i++)
    {
        printf("%d --> ",Array[i]);
        
    }

}


int BinarySearchRecursion(int* Array,int start,int end,int val)
{
    int mid=(start+end)/2;

    if(start>end)
    return -50;
    
    if(val==Array[mid])
    return mid;

    if(val<Array[mid])
    return BinarySearchRecursion(Array,start,mid-1,val);

    if(val>Array[mid])
    return BinarySearchRecursion(Array,mid+1,end,val);
}



int BinarySearch(int* Array,int size,int Number)
{
    int start=0;
    int end=size-1;


    while(start<=end)
    {

        int mid=(start+end)/2;

        if(Number==Array[mid])
        {
            printf("\nNumber Found ");
            return mid;
        }

        if(Number<Array[mid])
        {
            end=mid-1;
        }

        if(Number>Array[mid])
        {
            start=mid+1;
        }
    }

    return -50;
}
int main()
{
    printf("\nEnter the size of array:");
    int size;
    scanf("%d",&size);
    int Array[size];
    fillArray(Array,size);
    printf("\nEnter the Number to Search:");
    int number;
    scanf("%d",&number);

    int index=BinarySearchRecursion(Array,0,size-1,number);
    

    if(index!=-50)
    {
        printf("at index:%d",index);
    }
    else if(index==-50)
    {
        printf("\n Element not Found");
    }
}
