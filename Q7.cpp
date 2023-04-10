//7. Define a C++ class fraction
//class fraction
//{
//long numerator;
// long denominator;
 //Public:
 //fraction (long n=0, long d=0);
//}
//Overload the following operators as member or friend:
//a) Unary ++ (pre and post both)
//b) Overload as friend functions: operators << and >>.
#include<iostream>
#include<conio.h>
using namespace std;
class fraction
{
    int num;
    int deno;
    public:
      friend void operator>>(istream &i,fraction &f)
      {
        cout<<"numerator:" ;
        cin>>f.num;
        cout<<"denominator:";
         cin>>f.deno;
      }
      friend void operator<<(ostream &os,fraction &f)
      {
        cout<<f.num<<"/"<<f.deno<<endl;
    }
    fraction operator ++()
    {
        num=num+1;
        deno=deno+1;
        return (*this);
    }
    fraction operator ++(int s)
    {
          fraction old=(*this);
        num=num+1;
        deno=deno+1;
        return old;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"enter 1st fraction value"<<endl;
    cin>>f1;
    f1++;
     cout<<"f1++:"<<f1;
    ++f1;
    cout<<"++f1:"<<f1;
     cout<<"enter 2nd fraction value"<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"f1:"<<f1;
    cout<<"f2:"<<f2;
    f2=f1++;
    cout<<"f1:"<<f1;
    cout<<"f2:"<<f2;
    getch();
    return 0;

}