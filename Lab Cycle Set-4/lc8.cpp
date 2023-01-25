#include<iostream>
#include<stdio.h>
#include <stdlib.h>

using namespace std;

class point{
	private:
		int x,y;
	public:
		//int x,y;
		point()
		{
			x=0;
			y=0;
		}
		point(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void setX(int x)
		{
			this->x=x;
		}
		void setY(int y)
		{
			this->y=y;
		}
		void setXY(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void sum(int a,int b)
		{
			int s;
			s=a+b;
			cout<<"The sum is "<<s;
		}
		void sum(int a)
		{
			int r,s=0;
			int t=a;
			while(t>0)
			{
				r=t%10;
				s=s+r;
				t=t/10;
			}
			cout<<"Sum of digits of "<<a<<" is "<<s;
		}
		/*void sum(int y)
		{
			int d2;
			while(y!=0)
			{
				y=y/10;
				d2=d2+1;
			}
			cout<<"Sum of digits of "<<y<<" is "<<d2;
		}*/
};

int main()
{
	int x1,y1;
	//int gx,gy;
	point p;
	int ch;
	while(1)
	{
		cout<<"\n\n\t\tPOINT MENU\n\t\t===========\n\n1. Enter x\n2. Enter y\n3. Enter x and y\n4. Find sum of x and y\n5. Sum of digits of x\n6. Sum of digits of y\n7.Exit\n\n";
		cout<<"Enter your choice:\t";
		cin>>ch;
		cout<<endl;
		switch(ch)
		{
			case 1:{
					//int x1;
					cout<<"Enter number:\t";
					cin>>x1;
					p.setX(x1);
					//cout<<p.x;
					break;
				}
			case 2:{
					//int y1;
					cout<<"Enter number:\t";
					cin>>y1;
					p.setY(y1);
					break;
				}
			case 3:{
					cout<<"\nEnter number:\t";
					cin>>x1;
					cout<<"\nEnter second number:\t";
					cin>>y1;
					p.setXY(x1,y1);
					break;
				}
			case 4:{
					cout<<x1<<"+"<<y1<<endl;
					p.sum(x1,y1);
					break;		
				}
			case 5:{
					//cout<<x1<<endl;
					p.sum(x1);
					break;	
				}
			case 6:{
					//cout<<y1<<endl;
					p.sum(y1);
					break;
				}
			case 7:{
					cout<<"\t\tTHANK YOU\n\n";
					exit(0);
				}
			default:
				{
					cout<<"Invalid choice";
					break;
				}
		}
	}
}
