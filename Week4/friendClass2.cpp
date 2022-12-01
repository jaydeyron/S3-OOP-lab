#include<iostream>
using namespace std;
static int count=1;

class student{
	private:
		int RNo;
		float m1,m2,total;
	public:
		student()
		{
			RNo=count;
			count=count+1;
		}
		int display()
		{
			cout<<"---------------------------------------\n\n";
			cout<<"Roll No: "<<RNo<<"\n";
			cout<<"Sem 1 marks: "<<m1<<"\n";
			cout<<"Sem 2 marks: "<<m2<<"\n";
			cout<<"Total marks = "<<total<<"\n\n";
		}
		friend class teacher;
	};

class teacher{
	public:
		int enterMarks(student&t)
		{
			cout<<"\nEnter the marks in first semester: "<<endl;
			cin>>t.m1;
			cout<<"Enter the marks in second semester: "<<endl;
			cin>>t.m2;
			t.total=t.m1+t.m2;
			return t.total;
			
		}
	};

int main()
{
	student m;
	teacher b;
	b.enterMarks(m);
	m.display();
}
