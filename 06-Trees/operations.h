#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

typedef struct Node Node;

Node* getNode(int data)
{
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}

Node* Insert(Node* tree,int val)
{
    if(tree==NULL)
    tree=getNode(val);

    if(val<tree->data)
    {
        tree->left=Insert(tree->left,val);
    }

    if(val>tree->data)
    {
        tree->right=Insert(tree->right,val);
    }

    return tree;
}

void PreOrder(Node* tree)
{
    if(tree==NULL)
    return;

    printf("%d --> ",tree->data);
    PreOrder(tree->left);
    PreOrder(tree->right);
}

bool Search(Node* tree,int val)
{
    if(tree==NULL)
    return false;

    if(val<tree->data)
    return Search(tree->left,val);

    if(val>tree->data)
    return Search(tree->right,val);

    else if(val==tree->data)
    {
        return true;
    }
}

int findMax(Node* tree)
{
    if(tree->right==NULL)
    return tree->data;

    else
    findMax(tree->right);
}

int findMin(Node* tree)
{
    if(tree->left==NULL)
    return tree->data;

    else findMin(tree->left);
}

int findHeight(Node*tree)
{
    if(tree==NULL)
    return -1;
    else{
        int leftHeight=findHeight(tree->left);
        int rightHeight=findHeight(tree->right);
        if(leftHeight>=rightHeight)
        return leftHeight+1;
        else return rightHeight+1;
    }
}

Node* del(Node* tree,int val)
{
    if(tree==NULL)
    return tree;

    if(val<tree->data)
    {
        tree->left=del(tree->left,val);
    }

    else if(val>tree->data)
    {
        tree->right=del(tree->right,val);
    }

    else //Node Found
    {
        //case 1:No child
        if(tree->right==NULL && tree->left==NULL)
        {
            free(tree);
            tree=NULL;
            return tree;
        }

        //case 2:one child:right child exists
        if(tree->right!=NULL)
        {
            Node*temp=tree->right;
            free(tree);
            tree=temp;
        }
            //case 2:left child exists
        if(tree->left!=NULL)
        {
            Node* temp=tree->left;
            free(tree);
            tree=temp;
        }
        //case 3:both children exits
        else{
            int temp=findMax(tree->right);
            tree->right=del(tree->right,temp);
        }
        
        return tree;
}
}