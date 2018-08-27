#include<iostream>
using namespace std;
const int Size=10;
struct Queue
{
int array[10];
int front=-1,rear=-1;

void enQueue(int x)
{
  if(rear==Size-1)
  {
    cout<<"Queue is Full"<<endl<<endl;
  }
  else{
  rear=rear+1;
  array[rear]=x;
  }
}

int deQueue()
{
  int temp=front+1;
  front=front+2;
  return array[temp];
}

void frontView()
{
  cout<<array[front];
}

void isEmpty()
{
  if(rear==-1)
  {
    cout<<"It is Empty"<<endl<<endl;
  }
}

void ShowQueue()
{
  int temp=0;
  if(front!=-1)
  {
    temp=front;
  }

  for(int i=temp;i<=rear;i++)
  {cout<<array[i]<<" ";}
}
};

int main()
{
Queue Q;

  while(true)
  {
    cout<<"Queue Array Operations"<<endl<<endl<<endl;
    cout<<"1. Push Element"<<endl<<"2. Remove Element"<<endl<<"3. Show Queue"<<endl<<"4. Show Front Element"<<endl<<endl;
    int choice;
    cout<<"Enter your Choice"<<endl;
    cin>>choice;
    switch(choice)
    {

      case 1:cout<<"Enter the element to Push"<<endl;
      int temp;
      cin>>temp;
      Q.enQueue(temp);
      break;

      case 2:cout<<"Removed Element :"<<Q.deQueue()<<endl<<endl;
      break;

      case 3:cout<<endl<<endl;
      Q.ShowQueue();
      cout<<endl<<endl;
      break;


      case 4:Q.frontView();
      cout<<endl<<endl;
      break;

      default:cout<<"Enter a valid option"<<endl<<endl;
    }
  }
}
