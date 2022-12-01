#include<iostream>
using namespace std;

class students{
	public:
		int RNo,Contact;
		string Sname,Email;
		float semGPA[8];
		float TotalCGPA,total=0;
	void getData()
	{
		cout<<"Enter Roll number: ";
		cin>>RNo;
		cout<<"\nEnter Student name: ";
		cin>>Sname;
		cout<<"\nEnter Contact number: ";
		cin>>Contact;
		cout<<"\nEnter Email adress: ";
		cin>>Email;
		for(int i=0;i<8;i++)
		{
			cout<<"\nEnter the marks of Semester"<<i+1<<": "<<endl;
			cin>>semGPA[i];
			total=total+semGPA[i];
		}
	}
	void putData()
	{
		cout<<"\nName: "<<Sname;
		cout<<"\nRoll no: "<<RNo;
		cout<<"\nCGPA: "<<TotalCGPA<<"\n";
		cout<<"\n"<<Sname<<" has scored a CGPA of "<<TotalCGPA<<"\n";
	}
	void compute()
	{
		TotalCGPA=total/8;
		//cout<<"\n"<<Sname<<" has scored a CGPA of "<<TotalCGPA<<"\n";
	}
};
	
int main()
{
	students j;
	j.getData();
	j.compute();
	j.putData();
}
