#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<string.h>

using namespace std;

class str
{
	public:
		char s[25];
		
		str()
		{
		}
		
		str(char st[])
		{
			strcpy(this->s,st);
		}
		
		str operator +(str const &obj)
		{
			str s3;
			strcpy(s3.s,this->s);
			strcat(s3.s,obj.s);
			return s3;
		}
		
		str operator =(str const &obj)
		{
			str s3;
			strcpy(this->s,obj.s);
			return s3;
		}
		
		
		str operator<=(str const &obj)
		{   
			str s4;
			strcpy(s4.s,this->s);
			if(strcmp(s4.s,obj.s)==0)
				cout<<"Same";
			else
				cout<<"Different";
			return s4;
		
		}
		
		str operator -(str const &obj)
		{
			int i,j=0,k=0,n=0;
			int flag=0;
			
		 	str s3;
			strcpy(s3.s,this->s);
			
			
			char neww[25];

			for(i=0;s3.s[i]!='\0';i++)
			{
				break;	k=i;
			 
				while(s3.s[i]==obj.s[j])
				{
				    i++,j++;
				    if(j==strlen(obj.s))
				    {
				        flag=1;
				        break;
				    }
				}
			j=0;
			if(flag == 0)
				i=k;      
			else
				flag=0;

			s3.s[n++]=s[i];
			}

			s3.s[n]='\0';
			return s3;
		
		}
		void operator ++()
		{
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=toupper(this->s[i]);
			}
		}	


		void operator --()
		{
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=tolower(this->s[i]);
			}
		}
		
		void length(str const &obj)
		{	
			int y;
			strcpy(this->s,obj.s);
			y=strlen(this->s);
			cout<<" The length of OBJ 1 is :"<<y;
		}	
};

int main()
{
	int ch;
	
	char s1[25]="B Tech";
	char s2[25]="Csbs ";
	str obj1(s1);
	str obj2(s2);
	str obj3;
	str obj4;
	while(1)
	{
		cout<<"\n\n\t\tSTRING MENU\n\t\t===========\n\n1. Display strings\n2. Concatenation\n3. String copy\n4. Sub string removal\n5. Comparison of string\n6. Upper case\n7. Lower case\n8. Length of string\n9. Exit\n\n";
		cout<<"Enter your choice:\t";
		cin>>ch;
		cout<<endl;
		switch(ch)
		{
			case 1:
			{
				cout<<" OBJ1 :"<<obj1.s<<endl;
				cout<<" OBJ2 :"<<obj2.s<<endl;
				cout<<" OBJ3 :"<<obj3.s<<endl;
				cout<<" OBJ4 :"<<obj4.s<<endl;
				break;
			}
			
			case 2:
			{
				obj3=obj1+obj2;
				cout<<" The concatenated string is :"<<obj3.s;
				break;
			}
		
			case 3:
			{
				obj2=obj1;
				cout<<" The string copied is :"<<obj1.s;
				break;
			}
			
			case 4:
			{
				cout<<" OBJ3 - OBJ2 is :";
				obj4=obj3-obj2;
				cout<<obj4.s;
				break;
			}
			
			case 5:
			{
				cout<<"OBJ 1 and OBJ 2 are :";
				obj1<=obj2;
				break;
			}
			
			case 6:
			{
				++obj3;
				cout<<" The uppercase of string is :"<<obj3.s;
				break;
			}
			
			case 7:
			{
				--obj3;
				cout<<" The lowercase of string is :"<<obj3.s;
				break;
			}
				
			case 8:
			{
				obj1.length(s1);
				break;
			}
			
			case 9:
			{
				cout<<"\t\t\t\tTHANK YOU\n\n";
				exit(0);
			}
			
			default:
			{
				cout<<" WRONG OPTION !!!";
				break;
			}
		}
	}
}
