#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class strings{
	public:
			char s[50];
			/*string operator +(string const &obj)
			{
				
			}
			string operator =(string const &obj)
			{
				
			}
			string operator -(string const &obj)
			{
				
			}
			string operator <=(string const &obj)
			{
				
			}
			string operator ++(string const &obj)
			{
				
			}
			string operator --(string const &obj)
			{
				
			}*/
			void addStrings(int f)
			{
			    for(int i=0;i<f;i++)
			        {
			            cout<<"\nEnter "<<i+1<<" string:\t";
			            cin>>s[i];
			        }
			}
			void printStr()
			{
			    for(int i=0;i<50;i++)
			    {
			        if(s[i]!='\0')
			        {
			            cout<<s[i]<<endl;
			        }
			    }
			}
			void strLength(int n)
			{
			    int c=0;
				for(int i=0;i<n;i++)
				{
					if(s[i]!='\0')
					{
					    c=c+1;
					}
				}
			}
};

int main()
{
    strings st;
	int ch;
	while(1)
	{
		cout<<"\n\n\t\tSTRING MENU\n\t\t===========\n\n1. Enter string\n\n";
		cout<<"Enter your choice:\t";
		cin>>ch;
		cout<<endl;
		switch(ch)
		{
			case 1:{
			        int f;
			        cout<<"Enter the number of strings to add:\t";
			        cin>>f;
			        st.addStrings(f);
			        st.printStr();
			        st.strLength(f);
					break;
				}
			case 2:{
					break;
				}
			case 3:{
					break;
				}
			case 4:{
					break;
				}
			case 5:{
					break;
				}
			case 6:{
					break;
				}
			case 7:{
					cout<<"\t\tTHANK YOU\n\n";
					exit(0);
				}
			default:
				{
					cout<<"Invalid choice";
					break;
				}
		}
	}
}
