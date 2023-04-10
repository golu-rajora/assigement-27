//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<conio.h>
#include<iostream>
using namespace std;
class unary
{
   int x;
   public:
    unary(int a)
    {
        x=a;
    }
   int operator ++()
   {
       x=x+1;
       return x;
   }
   int operator --()
   {
       x=x-1;
       return x;
   }
   void display()
   {
       cout<<x<<endl;
   }
};
int main()
{
    int x;
    cout<<"enter a number:-";
    cin>>x;
     unary u=x;
    ++u;
    u.display();
    --u;
    u.display();

    getch();
    return 0;

}