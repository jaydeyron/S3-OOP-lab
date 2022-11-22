#include<iostream>
using namespace std;
	
class my_class{
	public:
		int a,b;#include<iostream>
using namespace std;

class car{
	public:
		int l;
		double c;
		car()
		{
			l=40;
			c=0.1;
			cout<<"\nCar with "<<l<<" liters and "<<c<<" consumption has been created\n\n";
		}
		car(int a,double b)
		{
			l=a;
			c=b;
			cout<<"Car with "<<l<<" liters and "<<c<<" consumption has been created\n\n";
		}
		~car()
		{
			cout<<"Car destructed\n";
		}
		void maxDistance()
		{
			double d;
			d=l/c;
			cout<<"Maximum distance that can be travelled on a single tank with the same is "<<d<<"\n\n";
		}
	};
	
int main()
{
	int p;
	double q;
	car c1;
	c1.maxDistance();
	cout<<"Enter litre capacity: ";
	cin>>p;
	cout<<"Enter consumption: ";
	cin>>q;
	car c2(p,q);
	c2.maxDistance();
}
		my_class()
		{
			cout<<"\nExecuting default constructor\n";
			a=0;
			b=0;
		}
		my_class(int x)
		{
			cout<<"\nExecuting parameterised constructor\n";
			a=x;
			b=0;
		}
		my_class(int x, int y)
		{
			cout<<"\nExecuting parameterised constructor\n";
			a=x;
			b=y;
		}
		~my_class()
		{
			cout<<"\nExecuting destructor\n";
		}
		void out()
		{
			cout<<"\nValue of a=";
			cout<<a;
			cout<<"\nValue of b=";
			cout<<b;
			cout<<"\n";
		}
	};
	
int main()
{
	my_class obj1;	
	obj1.out();
	my_class obj2(10);
	obj2.out();
	my_class obj3(10,20);
	obj3.out();
}
