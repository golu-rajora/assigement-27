//1. Define a class Complex with appropriate instance variables and member functions. 
//Define following operators in the class:
//a. +
//b. -
//c. *
//d. ==
#include<conio.h>
#include<iostream>
using namespace std;
class complex 
{
   int x,y;
   public:
   complex(int a,int b)
   {
       x=a;
       y=b;
   }
   complex()
   {

   }
   complex operator +(complex c)
   {
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
   }
   complex operator -(complex c)
   {
        complex temp;
        temp.x=x-c.x;
        temp.y=y-c.y;
        return temp;
   }
    complex operator *(complex c)
   {
        complex temp;
        int X,Y;
        X=x*c.x;
        Y=y*c.y;
        temp.x=X-Y;
        int A,B;
        A=x*c.y;
        B=y*c.x;
        temp.y=A+B;
        return temp;
   }
    void operator ==(complex c)
   {
        complex temp;
       if(x==c.x)
       {
         if(y==c.y)
         cout<<"both complex number are the same"<<endl;
         else
         cout<<"both complex number are the same"<<endl;
       }
       else
         cout<<"both complex number are not the same"<<endl;
   }
   void add()
   {
       cout<<"add two complex number is="<<x<<"+"<<y<<"i"<<endl;
   }
     void sub()
   {
       cout<<"subtraction two complex number is="<<x<<"-"<<y<<"i"<<endl;
   }
     void mul()
   {
       cout<<"multiply two complex number is="<<x<<"+"<<y<<"i"<<endl;
   }
};
int main()
{
    int a,b,c,d;
    cout<<"enter first complex number:-";
    cin>>a>>b;
      complex c1(a,b);
    cout<<"enter second complex number:-";
    cin>>c>>d;
     complex c2(c,d);
    complex c3=c1+c2;
    c3.add();
    complex c4=c1-c2;
    c4.sub();
    complex c5=c1*c2;
    c5.mul();
      c1==c2;
    getch();
    return 0;



}