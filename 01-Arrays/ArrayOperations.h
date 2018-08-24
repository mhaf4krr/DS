#include<stdio.h>


void insertElement(int* Array,int size,int index,int data)
{   
    //number of shifts required = last index of array (size -1) minus the index at which we need to insert
    for(int i=size-1;i>index;i--) 
    {
        Array[i]=Array[i-1];
    }

    Array[index]=data;
}


void DisplayArray(int*Array,int size)
{
    printf("\n");
    for(int i=0;i<size;i++)
    {
            printf("| %d |",Array[i]);
    }
}

void deleteElement(int *Array,int size,int index)
{
    for(int i=index;i<size-1;i++)
    {
        Array[i]=Array[i+1];
        size--;
    }
}

void shiftRight(int *Array,int size)
{
    int temp=Array[size-1];
    for(int i=size-1;i>=0;i--)
    {
        Array[i]=Array[i-1];
    }

    Array[0]=temp;
    printf("\nArray Shifted Right!\n");
}

void shiftLeft(int *Array,int size)
{
    int temp=Array[0];
    for(int i=0;i<=size-1;i++)
    {
        Array[i]=Array[i+1];
    }

    Array[size-1]=temp;
    printf("\nArray has been Shifted Left!\n");
}