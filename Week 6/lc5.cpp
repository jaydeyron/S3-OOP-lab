#include<iostream>
using namespace std;

class Employee
{
	public:
		string name,adress;
		int age,phone,salary;
		void printDetails()
		{
			cout<<"Name:\t"<<name<<endl;
			cout<<"Age:\t"<<age<<endl;
			cout<<"Phone number:\t"<<phone<<endl;
			cout<<"Adress:\t"<<adress<<endl;
		}
		void printSalary()
		{
			cout<<name<<" makes $"<<salary<<" an year.\n"<<endl;
		}
};

class Officer: public Employee
{
	public:
		string specialization;
		Officer()
		{
			cout<<"Enter name:\t";
			cin>>name;
			cout<<"Enter age:\t";
			cin>>age;
			cout<<"Enter phone number:\t";
			cin>>phone;
			cout<<"Enter adress:\t";
			cin>>adress;
			cout<<"Enter salary:\t";
			cin>>salary;
			cout<<"\n";
		}
};

class Manager: public Employee
{
	public:
		string department;
		Manager()
		{
			cout<<"Enter name:\t";
			cin>>name;
			cout<<"Enter age:\t";
			cin>>age;
			cout<<"Enter phone number:\t";
			cin>>phone;
			cout<<"Enter adress:\t";
			cin>>adress;
			cout<<"Enter salary:\t";
			cin>>salary;
			cout<<"\n";
		}
};
	
int main()
{
	Officer o;
	o.printDetails();
	o.printSalary();
	Manager m;
	m.printDetails();
	m.printSalary();
}
