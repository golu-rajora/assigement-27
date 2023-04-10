//3. Write a C++ program to add two complex numbers using operator overloaded by a friend 
//function.
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
   complex ()
   {

   }
    void display()
    {
        cout<<x<<"+"<<y<<"i"<<endl;
    }
    friend complex add(complex a,complex b);
};
 complex add(complex a,complex b)
 {
     complex temp;
     temp.x=a.x+b.x;
     temp.y=a.y+b.y;
     return temp;
 }
 int main()
 {
     int a,b,c,d;
     cout<<"enter first complex number:-";
     cin>>a>>b;
     cout<<"enter second complex number:-";
     cin>>c>>d;
     complex c1(a,b);
     cout<<" first complex number is=";
     c1.display();
     complex c2(c,d),c3;
     cout<<"second complex number is=";
     c2.display();
     c3=add(c1,c2);
     cout<<"add two complex number is =";
     c3.display();
     getch();

     return 0;



 }
