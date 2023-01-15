#include<iostream>
using namespace std;

class account{
    public:
        string cname,acctype;
        int accnum;
        int cbal,sbal;
};

class cur_acct: public account
{
    public:
        int dep;
        void cdepo()
        {
            cout<<"Enter deposit amount:\t";
            cin>>dep;
            cbal=cbal+dep;
        }
        void viewcbal()
        {
            cout<<"Current account balance:\t"<<cbal<<endl;
        }
};

class sav_acct: public account
{
    public:
        int dep;
        void sdepo()
        {
            cout<<"Enter deposit amount:\t";
            cin>>dep;
            sbal=sbal+dep;
        }
        void viewsbal()
        {
            cout<<"Savings account balance:\t"<<sbal<<endl;
        }
};

int main()
{
    account jay;
    jay.sdepo();
    jay.viewsbal();
    jay.viewcbal();
}
