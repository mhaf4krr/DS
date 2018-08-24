#include<stdio.h>

int partition(int Array[], int start, int end)
{
	int i, temp, temp1;
	int pivot = Array[end];
	int partitionIndex = start;
	for(i = start; i < end ; i++){
		if(Array[i] <= pivot){
			temp = Array[i];
			Array[i] = Array[partitionIndex];
			Array[partitionIndex] = temp;
			partitionIndex++;
		}
	}
	temp1 = Array[partitionIndex];
	Array[partitionIndex] = Array[end];
	Array[end] = temp1;
	return partitionIndex;
}
void quickSort(int A[], int start, int end)
{
	if(start < end)
	{
		int partitionIndex = partition(A, start, end);
		quickSort(A, start, partitionIndex - 1);
		quickSort(A, partitionIndex + 1, end);
	}
}