#include<iostream>

using namespace std;
class student{
	public:
	
	void getpersonalDetails()
	{
	cout<<"Enter student id"<<endl;
	cin>>stdID;
	cout<<"Enter student name"<<endl;
	cin>>stdName;
	}
	void putpersonalDetails()
	{
	printf(stdID);
	printf(stdName);
	}
};

class teacher{
	public:

	void getpersonalDetails()
	{
	cout<<"Enter teacher id"<<endl;
	cin>>tID;
	cout<<"Enter teacher name"<<endl;
	cin>>tName;
	}
	void putpersonalDetails()
	{
	printf(tID);
	printf(tName);
	}
};

class gradeCard{
	public:
	int stdID;
	int tID;
	int intM1;
	int intM2;
	int asMark1;
	int asmark2;
	int totInternalAsMark;
	int endsemMark;
	int Total;
	float GPA;
	void enterMarks()
	{
	cout<<"Enter student id"<<endl;
	cin>>stdID;
	cout<<"Enter teacher id"<<endl;
	cin>>tID;
	cout<<"Enter Internal marks 1"<<endl;
	cin>>intM1;
	cout<<"Enter Internal marks 2"<<endl;
	cin>>intM2;
	cout<<"Enter Assignment marks 1"<<endl;
	cin>>asMark1;
	cout<<"Enter Assignment marks 2"<<endl;
	cin>>asMark2;
	cout<<"Enter end semester mark"<<endl;
	cin>>endsemMark;
	totInternalAsMark=asMark1+asMark2;
	Total=totInternalAsMark+intM1+intM2+endsemMark;
	}
	void compute()
	{
	if(Total>90){
		GPA=10;
		}
	elif(90>Total>80){
		GPA=9
		}
	elif(80>Total>70){
		GPA=8
		}
	elif(70>Total>60){
		GPA=7
		}
	elif(60>Total>50){
		GPA=6
		}
	elif(50>Total>40){
		GPA=5
		}
	elif(40>Total>30){
		GPA=4
		}
	elif(30>Total>20){
		GPA=3
		}
	elif(20>Total>10){
		GPA=2
		}
	elif(10>Total>0){
		GPA=1
		}
	}
};

void viewGradecard(){
	
	}

gradeCard gd1;

int main()
{
	student st1;
	teacher tchr1;
	st1.getpersonaldetails();
	tchr1.getpersonaldetails();
}
