#include<iostream>
using namespace std;
class Queue
{
    int arr[5];
    int rear ;
    int front;

    public:
    Queue()
    {
        rear =  -1;
        front = -1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }

    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1) 
        return true;
        else
        return false;
    }

    bool isFull()
    {
        if (rear==4)
        return true;
        else
        return false;
    }

    void enqueue(int val)
    {
        if(isFull())
        {
            cout<<" Queue is full"<<endl;
            return ;
        }
        else if (isEmpty())
        {
           rear =0;
           front =0;
           arr[rear]=val;
        }
        else
        {
           rear++;
           arr[rear]=val;
        }
        
    }

    int dequeue()
    {
        int x;
        if (isEmpty())
        {
            cout<<" Queue is Empty "<<endl;
            return 0;
        }
        else if (front == rear)
        {
            x=arr[front];
            arr[front]=0;
            rear=-1;
            front=-1;
            
            return x;
        }
        else
        {
            x=arr[front];
            arr[front]=0;
            front++;
            return x;
        }
        
    }

    int count()
    {
        return(rear-front+1);
    }

    void display()
    {
     cout<<"All value in the queue are-"<<endl;
     for(int i=0;i<5;i++)
     {
         cout<<arr[i]<<" ";
     }
    }

};
int main()
{
    Queue q1;
    int option,value;

    do
    {
      cout<<" what operation do you want to perform ? Select an option number"<<endl;
      cout<<"1. Enqueue()"<<endl;
      cout<<"2. Dequeue()"<<endl;
      cout<<"3. isEmpty()"<<endl;
      cout<<"4. isFull()"<<endl;
      cout<<"5. count()"<<endl;
      cout<<"6. display()"<<endl;
      

      cin>>option;


      switch(option)
      {
          case 1:
          cout<<"Enqueue Operation \n Enter an item to Enqueue in the Queue"<<endl;
          cin>>value;
          q1.enqueue(value);
          break;

          case 2:
          cout<<"Dequeue Operation\n Dequeue Value:"<<q1.dequeue()<<endl;
          break;

          case 3:
          if (q1.isEmpty())
          cout<<" Queue is Empty "<<endl;
          else
          cout<<" Queue is not Empty"<<endl;
          break;

          case 4:
          if (q1.isFull())
          cout<<" Queue is Full "<<endl;
          else
          cout<<" Queue is not Full "<<endl;
          break;

          
          case 5:
          cout<<" Count Function Called-Number of itemsin the Queue are "<<q1.count()<<endl;
          break;

          
          case 6:
          cout<<" Display Function Called-"<<endl;
          q1.display();
          break;

          default:
          cout<<" Enter Proper Option number "<<endl;
          
        }

    } while (option!=0);

    return 0;

    
    
}