#include<iostream>
using namespace std;

class complex{
	public:
		float r,i;
		complex()
		{
			cout<<"Enter real part:"<<endl;
			cin>>r;
			cout<<"\nEnter imaginary part"<<endl;
			cin>>i;
			cout<<endl;
		}
		complex(float x,float y)
		{
			r=x;
			i=y;
		}
		void print()
		{
			cout<<"Result:"<<endl;
			cout<<r<<"+"<<i<<"i\n";
		}
		complex operator /(complex const &obj)
		{
			complex res(0,0);
			res.r=(r*obj.r+i*obj.i)/(obj.r*obj.r+obj.i*obj.i);
			res.i=(i*obj.r-r*obj.i)/(obj.r*obj.r+obj.i*obj.i);
			return res;
		}
	};

int main()
{
	complex a,b,c(0,0);
	c=a/b;
	c.print();
}
