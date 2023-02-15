#include<iostream>
using namespace std;

class Matrix
{
  public:
        int arr[4][4];
        Matrix()
        {
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<4;j++)
                {
                arr[i][j]=0;
                }
            }
        }
        Matrix(int a,int b,int c,int d,int e,int f,int g,int h,int i)
        {
            arr[1][1]=a;
            arr[1][2]=b;
            arr[1][3]=c;
            arr[2][1]=d;
            arr[2][2]=e;
            arr[2][3]=f;
            arr[3][1]=g;
            arr[3][2]=h;
            arr[3][3]=i;
        }
        Matrix(int n)
        {
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<4;j++)
                {
                cout<<endl<<"Enter element a["<<i<<"]["<<j<<"]:\t";
                    cin>>arr[i][j];
                }
            }
        }
        ~Matrix()
        {
            cout<<endl<<"Destructed"<<endl;
        }
        void putMat()
        {
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<4;j++)
                {
                    cout<<endl<<"Enter element a["<<i<<"]["<<j<<"]:\t";
                    cin>>arr[i][j];
                }
            }
        }
        void displayMat()
        {
            for(int i=1;i<4;i++)
            {
                cout<<endl;
                for(int j=1;j<4;j++)
                {
                    cout<<arr[i][j]<<"\t";
                }
            }
            cout<<endl;
        }
        void transposeMat()
        {
            int temp;
            for(int i=1;i<2;i++)
            {
                for(int j=1;j<4;j++)
                {
                    temp=arr[i][j];
                    arr[i][j]=arr[j][i];
                    arr[j][i]=temp;
                }
            }
            for(int i=2;i<3;i++)
            {
                for(int j=2;j<4;j++)
                {
                    temp=arr[i][j];
                    arr[i][j]=arr[j][i];
                    arr[j][i]=temp;
                }
            }
        }
        Matrix operator +(Matrix const &obj1)
        {
            Matrix m1;
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<4;j++)
                {
                    m1.arr[i][j]=arr[i][j]+obj1.arr[i][j];
                }
            }
            return m1;
        }
        Matrix operator -(Matrix const &obj2)
        {
            Matrix m2;
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<4;j++)
                {
                    m2.arr[i][j]=arr[i][j]-obj2.arr[i][j];
                }
            }
            return m2;
        }
        Matrix operator *(Matrix const &obj3)
        {
            Matrix m3;
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<4;j++)
                {
                    for(int k=1;k<4;k++)
                    {
                        m3.arr[i][j]+=arr[i][k]*obj3.arr[k][j];
                    }
                }
            }
            return m3;
        }
};

int main()
{
    cout<<endl<<"Enter Matrix A:"<<endl<<endl;
    Matrix A(1);
    cout<<endl<<"Default Matrix B created."<<endl<<endl;
    Matrix B(2,2,2,2,2,2,2,2,2);
    Matrix C;
    int ch;
    while(1)
    {
        cout<<endl<<"1.Add matrix A\n2.Add matrix B\n3.Display matrix A\n4.Display matrix B\n5.Matrix Addition\n6.Matrix Subtraction\n7.Matrix multiplication\n8.Transpose of matrix A\n9.Transpose of matrix A\n10.Exit\n\n";
        cout<<"Enter your choice:  ";
        cin>>ch;
        switch(ch)
        {
            case 1:{
                A.putMat();
                break;
            }
            case 2:{
                B.putMat();
                break;
            }
            case 3:{
                A.displayMat();
                break;
            }
            case 4:{
                B.displayMat();
                break;
            }
            case 5:{
                C=A+B;
                C.displayMat();
                break;
            }
            case 6:{
                C=A-B;
                C.displayMat();
                break;
            }
            case 7:{
                C=A*B;
                C.displayMat();
                break;
            }
            case 8:{
                A.transposeMat();
                A.displayMat();
                break;
            }
            case 9:{
                B.transposeMat();
                B.displayMat();
                break;
            }
            case 10:{
                cout<<"THANK YOU";
                return(0);
            }
        }
    }
}
