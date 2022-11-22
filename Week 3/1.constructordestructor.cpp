#include<iostream>
using namespace std;
	
class my_class{
	public:
		int a,b;
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
