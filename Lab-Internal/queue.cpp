#include<iostream>
using namespace std;

class Queue
{
  public:
        int arr[5];
        Queue()
        {
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }
        Queue(int a, int b, int c, int d, int e)
        {
            arr[0]=a;
            arr[1]=b;
            arr[2]=c;
            arr[3]=d;
            arr[4]=e;
        }
        ~Queue()
        {
            cout<<"DESTRUCTED";
        }
        void enqueue()
        {
            //if(arr[])
        }
        void dequeue()
        {
            
        }
        void displayQueue()
        {
            cout<<"|";
            for(int i=0;i<5;i++)
            {
                if(arr[i]==0)
                {
                    continue;
                }
                else
                {
                    cout<<"\t"<<arr[i];
                }
            }
            cout<<"\t|";
        }
        void isfull()
        {
            
        }
        void isempty()
        {
            
        }
};

int main()
{
    Queue A;
    int ch;
    while(1)
    {
        cout<<endl<<"\n\t\tQUEUE MENU\n";
        cout<<endl<<"1.Enqueue\n2.Dequeue\n3.Display queue\n4.Is queue empty?\n5.Is queue full?\n6.Exit\n\n";
        cout<<"Enter your choice:  ";
        cin>>ch;
        switch(ch)
        {
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                A.displayQueue();
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                cout<<"THANK YOU"<<endl;
                return(0);
            }
        }
    }
}
