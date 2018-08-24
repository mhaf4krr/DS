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

Node* Push(Node *top,int data)
{
    Node* temp=getNode(data);
    if(top==NULL)
    {
        return temp;
    }

    temp->next=top;
    top=temp;
}

Node* Pop(Node*top)
{
    if(top==NULL)
    {printf("\nUnderFlow!");
    return NULL;}
    Node* temp=top;
    top=top->next;
    printf("\nRemoved:%d",temp->data);
    free(temp);
    return top;
}

int Peep(Node*top)
{
    return top->data;
}

void Display(Node* traverse)
{
    if(traverse==NULL)
    {
        printf("\nUnderflow!");
        return;
    }
    while(traverse!=NULL)
    {
        printf("\n%d",traverse->data);
        traverse=traverse->next;
    }
}