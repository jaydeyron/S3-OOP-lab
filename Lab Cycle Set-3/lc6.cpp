#include<iostream>
using namespace std;

class Student
{
	public:
		int RNo,M1,M2;
		string name;
		void getStudentData()
		{
			cout<<"\nEnter student name:\t";
			cin>>name;
			cout<<"Enter roll number:\t";
			cin>>RNo;
			cout<<endl<<"Enter Subject 1 marks:\t";
			cin>>M1;
			cout<<"Enter Subject 2 marks:\t";
			cin>>M2;
			cout<<"\n";
		}
};

class Sport
{
	public:
		int graceMarks;
		void getSportsData()
		{
			cout<<"Enter grace marks awarded to student(if any):\t";
			cin>>graceMarks;
			cout<<"\n";
		}
};

class Report: public Student, public Sport
{
	public:
		int total,avg;
		void calcAvg()
		{
			total=M1+M2+graceMarks;
			avg=total/3;
		}
		void displayReport()
		{
			cout<<"Name :\t"<<name<<endl;
			cout<<"Roll number :\t"<<RNo<<endl;
			cout<<"Final exam results :\t"<<avg<<" marks."<<endl;
			}
};
	
int main()
{
	Report a;
	a.getStudentData();
	a.getSportsData();
	a.calcAvg();
	a.displayReport();
	cout<<"\n";
}
