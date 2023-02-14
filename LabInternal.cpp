/*
#include<iostream>
using std::cout,std::cin,std::endl;

class Matrix
{
  public:
        int a[4][4];
        void putMat()
        {
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<4;j++)
                {
                    cout<<endl<<"Enter element a["<<i<<"]["<<j<<"]:\t";
                    cin>>a[i][j];
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
                    cout<<a[i][j]<<"\t";
                }
            }
            cout<<endl;
        }
        Matrix operator *(Matrix const &obj)
        {
            Matrix m;
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<4;j++)
                {
                    for(int k=1;k<4;k++)
                    {
                        m.a[i][j]+=a[i][k]*obj.a[k][j];
                    }
                }
            }
            return m;
        }
};

int main()
{
    Matrix m1,m2,m3;
    m1.putMat();
    m2.putMat();
    m3=m1*m2;
    m3.displayMat();
}
*/
