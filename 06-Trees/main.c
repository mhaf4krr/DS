#include"operations.h"

Node* treeRoot=NULL;

int main()
{
    while(1)
    {
        printf("\n\n1.Insert\n2.PreOrder\n3.Search an Element\n4.Find Max\n5.Find Min\n6.Height of Tree\n7.Delete Element\n");
        int option;
        scanf("%d",&option);

        switch(option)
        {
            case 1:printf("\nEnter the data to be Inserted:");
            int data;
            scanf("%d",&data);
            treeRoot=Insert(treeRoot,data);
            break;

            case 2:printf("\nPreorder traversal:");
            PreOrder(treeRoot);
            printf("\n");
            break;

            case 3:printf("\nEnter the element to search:");
            int val;
            scanf("%d",&val);
            if(Search(treeRoot,val))
            printf("\nElement Found\n");
            else printf("\nElement Not Found!\n");
            break;

            case 4:printf("\nMax Element:%d",findMax(treeRoot));
            break;

            case 5:printf("\nMin Element:%d",findMin(treeRoot));
            break;

            case 6:printf("\nHeight:%d",findHeight(treeRoot));
            break;

            case 7:printf("\nEnter the value to be Deleted:");
                int val1;
                scanf("%d",&val1);
                treeRoot=del(treeRoot,val1);
                break;
        }
    
    }
}