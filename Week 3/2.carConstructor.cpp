#include<iostream>
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
