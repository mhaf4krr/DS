#include<stdio.h>

void SelectionSort(int* Array,int Size)
{
    for(int i=0;i<Size-1;i++)
    {
        int min=i;

       for(int j=i+1;j<Size;j++)
       {
           if(Array[j]<Array[i])
           min=j;
       }

        int temp=Array[i];
        Array[i]=Array[min];
        Array[min]=temp;
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

    SelectionSort(Array,size);


    printf("\n\n");
     for(int i=0;i<size;i++)
    {
        printf(" %d ",Array[i]);
    }

}