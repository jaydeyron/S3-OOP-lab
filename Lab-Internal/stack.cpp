#include<iostream>
using namespace std;

class Stack
{
  public:
        int arr[5];
        Stack()
        {
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }
        Stack(int a,int b,int c,int d,int e)
        {
            arr[0]=a;
            arr[1]=b;
            arr[2]=c;
            arr[3]=d;
            arr[4]=e;
        }
        Stack(int n)
        {
        }
        ~Stack()
        {
            cout<<endl<<"Destructed"<<endl;
        }
        void push()
        {
            if(arr[4]!=0)
            {
                cout<<"STACK OVERFLOW"<<endl;
            }
            for(int i=0;i<5;i++)
            {
                if(arr[i]==0)
                {
                    cout<<"Enter element "<<i+1<<": ";
                    cin>>arr[i];
                    break;
                }
            }
        }
        void pop()
        {
            if(arr[0]==0)
            {
                cout<<"STACK UNDERFLOW"<<endl;
            }
            else
            {
                for(int i=4;i>-1;i--)
                {
                    if(arr[i]!=0)
                    {
                        arr[i]=0;
                        cout<<"Element "<<i+1<<" popped";
                        break;
                    }
                }
            }
        }
        void normdisplay()
        {
            for(int i=4;i>-1;i--)
            {
                cout<<"| "<<arr[i]<<" |"<<endl;
            }
        }
        void isFull()
        {
            if(arr[4]!=0)
            {
                cout<<"Stack is Full";
            }
            else
            {
                cout<<"Stack is not Full";
            }
        }
        void isEmpty()
        {
            if(arr[0]==0)
            {
                cout<<"Stack is Empty";
            }
            else
            {
                cout<<"Stack is not Empty";
            }
        }
};

int main()
{
    Stack A;
    int ch;
    while(1)
    {
        cout<<endl<<"\n\t\tSTACK MENU\n";
        cout<<endl<<"1.Push element\n2.Pop element\n3.Display stack\n4.Is stack empty?\n5.Is stack full?\n6.Exit\n\n";
        cout<<"Enter your choice:  ";
        cin>>ch;
        switch(ch)
        {
            case 1:{
                A.push();
                break;
            }
            case 2:{
                A.pop();
                break;
            }
            case 3:{
                A.normdisplay();
                break;
            }
            case 4:{
                A.isEmpty();
                break;
            }
            case 5:{
                A.isFull();
                break;
            }
            case 6:{
                cout<<"THANK YOU"<<endl;
                return(0);
            }
        }
    }
}
