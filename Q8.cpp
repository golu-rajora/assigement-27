//8. Consider a class Matrix 
//Class Matrix
//{
 //int a[3][3];
 //Public:
 //methods;
//};
//Overload the - (Unary) should negate the numbers stored in the object
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
    operator -()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                a[i][j]=-a[i][j];
            }
        }
    }

};
int main()
{
    Matrix m1;
    m1.set_data();
    cout<<"matrix is 3X3:-"<<endl;
    m1.display();
    -m1;
    cout<<"negate matrix is:-"<<endl;
    m1.display();
    getch();
    return 0;
}