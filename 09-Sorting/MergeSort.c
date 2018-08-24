#include<stdio.h>
#define size 25


void Merge(int Array[],int start,int mid,int end)
{
    int temp[size]; //temporary array to store merged list
    int i=start; int j=mid+1; int index=i;

    while((i<=mid)&&(j<=end))
    {
        if((Array[i])<Array[j])
        {
            temp[index]=Array[i];
            index++;
            i++;
        }

         if((Array[i])>Array[j])
        {
            temp[index]=Array[j];
            index++;
            j++;
        }

    }

    while(i<=mid)
    {
        temp[index]=Array[i];
        i++;
        index++;
    }

    while(j<=end)
    {
        temp[index]=Array[j];
        index++;
        j++;
    }

    for(int k=start;k<index;k++)  //copies temporary list that has been merged into original list
    {
        Array[k]=temp[k];
    }

}
void MergeSort(int Array[],int start,int end)
{
    int mid;
    if(start<end)
    {
        mid=(start+end)/2;
        MergeSort(Array,start,mid);
        MergeSort(Array,mid+1,end);
        Merge(Array,start,mid,end);
    }
}

int main()
{
    int Arr[8]={25,30,1,8,55,89,97,85};

    for(int i=0;i<8;i++)
    {
        printf("%d ",Arr[i]);
    }

    MergeSort(Arr,0,7);
    printf("\n");


    for(int i=0;i<8;i++)
    {
        printf("%d ",Arr[i]);
    }

}