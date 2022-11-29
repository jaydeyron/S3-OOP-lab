#include<iostream>
using namespace std;

static int count=1;
class student{
	private:
		int Contact;
		string Email;
		float semGPA[8];
		float TotalCGPA;
		void compute()
		{
			TotalCGPA=total/8;
			cout<<"\n"<<Sname<<" has scored a CGPA of"<<TotalCGPA;
		}
	public:
		int RNo,total=0;
		string Sname;
		student()
		{
			RNo=count++;
		}
		void getData()
		{
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
			compute();
			cout<<"\nCGPA: "<<TotalCGPA<<"\n";	
		}
	};
	
int main()
{
	int j,n;
	cout<<"Enter the number of students: ";
	cin>>n;
	student a[n];
	for(j=0;j<n;j++)
	{
		a[j].getData();
		a[j].putData();
	}
}
