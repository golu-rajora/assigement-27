//10. Class Matrix
//{
 //int a[3][3];
 //Public:
 //methods;
//};
//Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).
#include<conio.h>
#include<iostream>
using namespace std;
class Matrix
{
  int a[3][3];
  public:
  void set_data()
  {
    cout<<"enter the 9 element of the 3X3 matrix:-";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
  }
    void display()
    {
       for(int i=0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
       } 
    }
    Matrix operator + (Matrix m)
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return temp;
    }

};
int main()
{
    Matrix m1,m2,m3;
    m1.set_data();
    m2.set_data();
    cout<<"first matrix is 3X3:-"<<endl;
    m1.display();
    cout<<"second matrix is 3X3:-"<<endl;
    m2.display();
    m3=m1+m2;
    cout<<"add two matrix is:-"<<endl;
    m3.display();
    getch();
    return 0;
}