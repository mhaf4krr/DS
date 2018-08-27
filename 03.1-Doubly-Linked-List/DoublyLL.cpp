//Double Linked List Implementation

#include<iostream>
using namespace std;
struct node{
  int data;
  node* previous;
  node * next;
};

//***********************   global root varaible ***********************
node * root;

//operation declarations
void append();
void display();
int length();

int len;
int main()
{
while(true)
{
  cout<<endl<<endl<<"Enter the option"<<endl<<"1. Append"<<endl<<"2. Display"<<endl<<"3. Length"<<endl<<"4. Insert at a Position"<<endl<<"5. Delete Node at a Specific Position"<<endl<<"6. Reverse a List(Itterative Approach)"<<endl<<"7.Display Elements Recursively"<<endl<<"8. Display Elements Reverse Order (Recursion)"<<endl<<endl<<endl;


  int choice;
  cin>>choice;
  switch(choice)
  {
    case 1:append();
    break;

    case 2:display();
    break;

    case 3:cout<<endl<<"Lentgh is :"<<length();
        len=length();
        break;
    default:cout<<"Enter the corroct option";
}

}
}

void append()
{
node * temp=(node *)new(node);
cout<<endl<<endl<<"Enter the node data"<<endl;;
cin>>temp->data;
temp->previous=NULL;
temp->next=NULL;
if(root==NULL)
{
  root=temp;
}

else
{
  node * tempRoot=root;

  while(tempRoot->next!=NULL)
  {
    tempRoot=tempRoot->next;
  }

    tempRoot->next=temp;
    temp->previous=tempRoot;
}
}



//***************************  Display Function ************************

void display()
{
  node * tempRoot=root;
  if(root==NULL)
  {
    cout<<endl<<endl<<"List is Empty"<<endl<<endl;

  }

  else {
    cout<<endl<<endl;
    while(tempRoot!=NULL)
    {
      cout<<tempRoot->data<<"-->";
      tempRoot=tempRoot->next;
    }
  }
}

int length()
{
  node * tempRoot=root;
  int count=0;
  if(root==NULL)
  {
    return 0;
  }

  else {
    while(tempRoot!=NULL)
    {
      count++;
      tempRoot=tempRoot->next;
    }
  }
}
