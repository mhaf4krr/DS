#include<stdio.h>
#include<malloc.h>


struct Node{
    int data;
    struct Node* next;
};

typedef struct Node Node;
Node* getNode(int data)
{
    Node* tempNode=(Node*)malloc(sizeof(Node));
    tempNode->data=data;
    tempNode->next=NULL;
    return tempNode;
}

Node* insertBegin(int data,Node* traverse)
{
    Node* tempNode=getNode(data);

    if(traverse==NULL)
    {
        
    }

    else {
        tempNode->next=traverse;
    }

    return tempNode;
}

Node* insertElementEnd(int data,Node* traverse)
{
    if(traverse==NULL)
    {
        Node* temp=getNode(data);
        return temp;
    }

    else
    {
        traverse->next=insertElementEnd(data,traverse->next);
    }

    return traverse;
}

void DisplayList(Node* traverse)
{
   while(traverse!=NULL)
   {
       printf("%d-->",traverse->data);
       traverse=traverse->next;
   }
}

void insertElement(int data,int position,Node* traverse)
{
    if(traverse==NULL)
    {
        printf("\nList Empty");
        return;
    }

    for(int i=1;i<position-1;i++)
    {
        traverse=traverse->next;
    }

    Node* tempNode=getNode(data);
    tempNode->next=traverse->next;
    traverse->next=tempNode;
}

Node* Mergefunction(Node* traverseL1,Node* traverseL2)
{
    Node* Merge=NULL;
    while(traverseL1!=NULL && traverseL2!=NULL)
    {
        if(traverseL1->data<traverseL2->data)
        {
            Merge=insertElementEnd(traverseL1->data,Merge);
            traverseL1=traverseL1->next;
        }

        if(traverseL2->data<traverseL1->data)
        {
            Merge=insertElementEnd(traverseL2->data,Merge);
            traverseL2=traverseL2->next;
        }

        if(traverseL1->data==traverseL2->data)
        {
            Merge=insertElementEnd(traverseL1->data,Merge);
            traverseL1=traverseL1->next;
            traverseL2=traverseL2->next;
        }
    }

    while(traverseL1!=NULL)
    {
        Merge=insertElementEnd(traverseL1->data,Merge);
            traverseL1=traverseL1->next;
    }

    while(traverseL2!=NULL)
    {
        Merge=insertElementEnd(traverseL2->data,Merge);
            traverseL2=traverseL2->next;
    }

    return Merge;
}

Node* Reverse(Node* previous,Node* traverse)
{
    if(traverse==NULL)
    {
        return previous;
    }
  

    else{
        Node* next=traverse->next;
        traverse->next=previous;
        Reverse(traverse,next);
    }
}

Node* ReverseItterate(Node* traverse)
{
    Node* previous=NULL;
    Node* next;

    while(traverse!=NULL)
    {
        next=traverse->next;
        traverse->next=previous;
        previous=traverse;
        traverse=next;
    }

    return previous;
    
}