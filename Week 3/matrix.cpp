//matrix ADDITION

#include<iostream>
using namespace std;

class matrix{
	public:
		int mat[2][2];
		matrix()
		{
			mat[1][1]=1;
			mat[1][2]=1;
			mat[2][1]=1;
			mat[2][2]=1;
		}
		matrix(int a)
		{
			mat[1][1]=a;
			mat[1][2]=1;
			mat[2][1]=1;
			mat[2][2]=1;
		}
		matrix(int a,int b)
		{
			mat[1][1]=a;
			mat[1][2]=b;
			mat[2][1]=1;
			mat[2][2]=1;
		}
		matrix(int a,int b,int c)
		{
			mat[1][1]=a;
			mat[1][2]=b;
			mat[2][1]=c;
			mat[2][2]=1;
		}
		matrix(int a,int b,int c,int d)
		{
			mat[1][1]=a;
			mat[1][2]=b;
			mat[2][1]=c;
			mat[2][2]=d;
		}
		matrix addMatrix(matrix u,matrix v)
		{
			matrix t;
			t.mat[0][0]=u.mat[0][0]+v.mat[0][0];
			t.mat[0][1]=u.mat[0][1]+v.mat[0][1];
			t.mat[1][0]=u.mat[1][0]+v.mat[1][0];
			t.mat[1][1]=u.mat[1][1]+v.mat[1][1];
			return t;
		}
		~matrix()
		{
			cout<<"Deconstructed\n";
		}
		void display()
		{
			cout<<"\nResulting matrix:\n";
			cout<<mat[0][0];
			cout<<mat[0][1];
			cout<<mat[1][0];
			cout<<mat[1][1];
			cout<<"\n";			
		}
};
	
int main()
{
	cout<<"\nmatrix ADDITION\n\n";
	int a,b,c,d;
	cout<<"Enter the terms of the first matrix:\n";
	cout<<"Enter M[0][0] term:\n";
	cin>>a;
	cout<<"Enter M[0][1] term:\n";
	cin>>b;
	cout<<"Enter M[1][0] term:\n";
	cin>>c;
	cout<<"Enter M[1][1] term:\n";
	cin>>d;
	cout<<"Enter the terms of the second matrix:\n";
	cout<<"Enter M[0][0] term:\n";
	cin>>a;
	cout<<"Enter M[0][1] term:\n";
	cin>>b;
	cout<<"Enter M[1][0] term:\n";
	cin>>c;
	cout<<"Enter M[1][1] term:\n";
	cin>>d;
	cout<<"\n";
	matrix m1(a,b,c,d),m2(a,b,c,d),m3;
	m3=m3.addMatrix(m1,m2);
	m3.display();
}
