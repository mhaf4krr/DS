#include<stdio.h>

void InsertionSort(int* Array,int size)
{

    for(int i=1;i<size;i++) //here i=1 because first element is condisered to be in the sorted set already
    {
        
        int currentElement=Array[i];
        int hole=i;

        while(hole>0 && currentElement<Array[hole-1])
        {
            Array[hole]=Array[hole-1];
            hole=hole-1;
        }

        Array[hole]=currentElement;
    }
}

int main()
{
    int size;
    printf("\nEnter the size of Array: ");
    scanf("%d",&size);  
    int Array[size];
    printf("\nEnter the Array data:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&Array[i]);
    }

    printf("\n\n");
     for(int i=0;i<size;i++)
    {
        printf(" %d ",Array[i]);
    }

    InsertionSort(Array,size);


    printf("\n\n");
     for(int i=0;i<size;i++)
    {
        printf(" %d ",Array[i]);
    }

}