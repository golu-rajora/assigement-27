//5. Consider following class Numbers
//class Numbers
//{
 //int x,y,z;
 //public:
 // methods
//};
//Overload the operator unary minus (-) to negate the numbers
#include<iostream>
#include<conio.h>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
    Numbers(int a,int b,int c)
    {
         x=a;
         y=b;
         z=c;
    }
    Numbers()
    {

    }
    void display()
    {
        cout<<x<<endl<<y<<endl<<z;
    }
    friend Numbers operator -(Numbers X)
    {
         Numbers temp;
         temp.x=-X.x;
         temp.y=-X.y;
         temp.z=-X.z;
         return temp;

    }

};
   int main()
   {
       int a,b,c;
       cout<<"enter 3 numbers:-";
       cin>>a>>b>>c;
       Numbers n1(a,b,c),n2;
       cout<<"numbers is="<<endl;
       n1.display();
       n2=-n1;
       cout<<endl<<"negate number is="<<endl;
       n2.display();
       getch();
       return 0;




   }