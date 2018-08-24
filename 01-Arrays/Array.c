#include"ArrayOperations.h"

int  size=5;

int Array[]={90,91,92,93,94};




    

int main()
{
    

    while(1)
    {
        printf("\n\n1.Insert Element\n2.Display Array\n3.Delete Element\n4.Shift Array Right\n5.Shift Array Left\n");
        int option;
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("\nEnter the location and Data\n");
            int data,location1;            
            scanf("%d",&location1);
            scanf("%d",&data);
            //void insertElement(int* Array,int size,int index,int data)
            insertElement(Array,size,location1-1,data);
            break;

            case 2:DisplayArray(Array,size);
            break;     

            case 3:printf("\nEnter the location to delete\n");
            //void deleteElement(int *Array,int size,int index)
            int location;
            scanf("%d",&location);
            deleteElement(Array,size,location-1);   
            DisplayArray(Array,size);
            break;

            case 4:shiftRight(Array,size);
            break;

            case 5:shiftLeft(Array,size);
            break;

            default:"Please Enter the Correct Option";
        }
    }
    
  
}