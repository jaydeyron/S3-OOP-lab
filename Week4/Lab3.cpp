#include<iostream>
using namespace std;

static int count=1;

class employee{
    private:
        float it;
        float da;
        float netsal;
        float basic;
        void compute()
        {
            cout<<endl<<"Enter basic salary(within 40000): ";
            cin>>basic;
            da=basic*0.52;
            if(basic<10000)
                it=0;
            else if(basic<20000)
                it=basic*0.1;
            else if(basic<30000)
                it=basic*0.2;
            else if(basic<40000)
                it=basic*0.3;
            netsal=(basic+da)-it;
            cout<<"Dearness Allowance: "<<da<<endl<<"Income Tax: "<<it<<endl<<"Net Salary: "<<netsal<<endl;
                    
        }
    
    public:
        int eno;
        string ename;
        
        employee()
        {
            eno=count;
            count++;
        }
        
        void getdata()
        {
            cout<<endl<<"Enter employee name: ";
            cin>>ename;
            
        }
        
        void putdata()
        {
            cout<<endl<<"   EMPLOYEE DETAILS   "<<endl;
            cout<<endl<<"Employee no : "<<eno;
            cout<<endl<<"Employee name : "<<ename<<endl;
            compute();
        }
        
        ~employee()
        {
            cout<<"Data Destroyed\n";
        }
    

};

int main()
{
int i;
employee e[3];
for(i=0;i<3;i++)
{
e[i].getdata();
e[i].putdata();
}
}
