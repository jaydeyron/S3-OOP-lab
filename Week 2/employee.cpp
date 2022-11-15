#include<iostream>

using namespace std;
class employee{
	public:
		string name;
		int year;
		int salary;
		string adress;
		
		void getData()
		{
		cout<<"Enter the employee name:";
		cin>>name;
		cout<<"Enter year of joining:";
		cin>>year;
		cout<<"Enter adress:";
		cin>>adress;
		}
		
		void putData()
		{
		cout<<name<<endl;
		cout<<year<<endl;
		cout<<adress<<endl;
		}			
	};
	
int main()
{
	int i,n;
	cout<<"Enter number of employees:";
	cin>>n;
	employee emp[n];
	for(i=0;i<n;i++)
	{
		emp[i].getData();
		cout<<"\n";
		emp[i].putData();
		cout<<"\n";
	}
}
