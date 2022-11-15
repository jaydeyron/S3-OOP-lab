#include<iostream>

using namespace std;
class complex{
	public:
		int real,imag;
		
		void getData()
		{
			cout<<"\nEnter the real part\n";
			cin>>real;
			cout<<"Enter the imaginary part\n";
			cin>>imag;
		}
		
		void putData()
		{
			cout<<real<<endl;
			cout<<imag<<endl;
		}
		
		complex add(complex a,complex b,complex c)
		{
			complex s;
			s.real=a.real+b.real+c.real;
			s.imag=a.imag+b.imag+c.imag;
			return s;
		}
		
		complex subtract(complex a,complex b)
		{
			complex s;
			s.real=a.real-b.real;
			s.imag=a.imag-b.imag;
			return s;
		}
	};
	
int main()
{
	complex c1,c2,c3,c4,c5,c6,c7;
	cout<<"\nEnter the numbers for addition:\n";
	c1.getData();
	c2.getData();
	c3.getData();
	cout<<"\nSum of complex numbers:\n";
	c4=c4.add(c1,c2,c3);
	c4.putData();
	cout<<"\nEnter the numbers for subtraction:\n";
	c4.getData();
	c5.getData();
	cout<<"\nDifference of complex numbers:\n";
	c6=c6.subtract(c4,c5);
	c6.putData();
}
