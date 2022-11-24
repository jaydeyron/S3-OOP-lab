//SCALAR MULTIPLICATION

#include<iostream>
using namespace std;

class scalar{
	public:
		int data[3];
		scalar()
		{
			data[0]=1;
			data[1]=1;
			data[2]=1;
		}
		scalar(int a)
		{
			data[0]=a;
			data[1]=1;
			data[2]=1;
		}
		scalar(int a,int b)
		{
			data[0]=a;
			data[1]=b;
			data[2]=1;
		}
		scalar(int a,int b,int c)
		{
			data[0]=a;
			data[1]=b;
			data[2]=c;
		}
		scalar multiply(int x,scalar v)
		{
			scalar t;
			t.data[0]=x*v.data[0];
			t.data[1]=x*v.data[1];
			t.data[2]=x*v.data[2];
			return t;
		}
		~scalar()
		{
			cout<<"Deconstructed\n";
		}
		void display()
		{
			cout<<"\nResulting vector:\n";
			cout<<"[ "<<data[0];
			cout<<", "<<data[1];
			cout<<", "<<data[2]<<" ]";
			cout<<"\n";
		}
};
	
int main()
{
	int x1,y1,z1,n;
	cout<<"\nEnter the dimensions of vector:\n";
	cout<<"a : ";
	cin>>x1;
	cout<<"b : ";
	cin>>y1;
	cout<<"c : ";
	cin>>z1;
	cout<<"\nEnter scalar: ";
	cin>>n;
	cout<<"\n";
	scalar v1(x1,y1,z1),v2;
	v2=v2.multiply(n,v1);
	v2.display();
}
