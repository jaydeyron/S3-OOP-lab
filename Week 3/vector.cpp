//VECTOR ADDITION

#include<iostream>
using namespace std;

class vector{
	public:
		int x[3];
		vector()
		{
			x[0]=1;
			x[1]=1;
			x[2]=1;
		}
		vector(int a)
		{
			x[0]=a;
			x[1]=1;
			x[2]=1;
		}
		vector(int a,int b)
		{
			x[0]=a;
			x[1]=b;
			x[2]=1;
		}
		vector(int a,int b,int c)
		{
			x[0]=a;
			x[1]=b;
			x[2]=c;
		}
		vector addVector(vector u,vector v)
		{
			vector t;
			t.x[0]=u.x[0]+v.x[0];
			t.x[1]=u.x[1]+v.x[1];
			t.x[2]=u.x[2]+v.x[2];
			return t;
		}
		~vector()
		{
			cout<<"Deconstructed\n";
		}
		void display()
		{
			cout<<"\nResulting vector:\n";
			cout<<"[ "<<x[0];
			cout<<", "<<x[1];
			cout<<", "<<x[2]<<" ]";
			cout<<"\n";
		}
};
	
int main()
{
	cout<<"\nVECTOR ADDITION\n\n";
	int x1,y1,z1,x2,y2,z2;
	cout<<"Enter the dimensions of first vector:\n";
	cout<<"a : ";
	cin>>x1;
	cout<<"b : ";
	cin>>y1;
	cout<<"c : ";
	cin>>z1;
	cout<<"\nEnter the dimensions of second vector:\n";
	cout<<"a : ";
	cin>>x2;
	cout<<"b : ";
	cin>>y2;
	cout<<"c : ";
	cin>>z2;
	cout<<"\n";
	vector v1(x1,y1,z1),v2(x2,y2,z2),v3;
	v3=v3.addVector(v1,v2);
	v3.display();
}
