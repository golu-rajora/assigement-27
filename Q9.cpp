//9. Consider the following class mystring
//Class mystring
//{
 //char str [100];
// Public:
 // methods
//};
//Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to 
//Lowercase and vice versa).
#include<conio.h>
#include<cstring>
#include<iostream>
using namespace std;
class Mystring
{
    char str[100];
    public:
    Mystring(char *s)
    {
        strcpy(str,s);
    }
    Mystring()
    {

    }
    Mystring operator !()
    {
        Mystring r;
        for(int i=0;r.str[i]=!'\0';i++)
        {
            if(r.str[i]>96)
            r.str[i]=r.str[i]+32;
            else
             r.str[i]=str[i];
        }
        return r;
    }
    void display()
    {
        cout<<str;
    }

};
int main()
{
    char a[100];
    cout<<"enter your name:-"<<endl;
    cin.getline(a,100);
    Mystring m1(a),m2;
    m1.display();
    m2=!m1;
    m1.display();
    m2.display();
    getch();
    return 0;

        
}
