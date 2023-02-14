#include<iostream>
using namespace std;

//static int count=1;

class Student{
	public:
		int RNo;
		string SName;
		void getStudentData()
		{
			cout<<"Enter name of the student"<<endl;
			cin>>SName;
			cout<<"\nEnter roll no of the student"<<endl;
			cin>>RNo;
			cout<<"\nStudent data added\n"<<endl;
		}
};

class Test: public Student{
	public:
		int markSub1,markSub2,markSub3;
		void getMarks()
		{
			cout<<"Enter Subject 1 marks"<<endl;
			cin>>markSub1;
			cout<<"\nEnter Subject 2 marks"<<endl;
			cin>>markSub2;
			cout<<"\nEnter Subject 3 marks"<<endl;
			cin>>markSub3;
		}
};

class Result: public Test{
	public:
		int Total;
		void putResult()
		{
			Total=markSub1+markSub2+markSub3;
			cout<<"\n"<<SName<<"-"<<RNo<<" has scored "<<Total<<" marks."<<endl;
		}
};

int main()
{
	
	Result a;
	a.getStudentData();
	a.getMarks();
	a.putResult();
}
