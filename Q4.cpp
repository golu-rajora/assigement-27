//4. Create a class Time which contains:
//- Hours
//- Minutes
//- Seconds
//Write a C++ program using operator overloading for the following:
//1. = = : To check whether two Times are the same or not. 
//2. >> : To accept the time.
//3. << : To display the time.
#include<conio.h>
#include<iostream>
using namespace std;
class Time
{
    int hour,min,sec;
    public:
    Time(int a,int b,int c)
    {
        hour=a;
        min=b;
        sec=c;
    }
    void operator ==(Time t)
    {
        if(hour==t.hour)
        {
            if(min==t.min)
            {
                if(sec==t.sec)
                {
                    cout<<"both time are the same";
                }
                else
                cout<<"both time are not the same";
            }
            else
            cout<<"both time are not the same";
        }
        else
        cout<<"both time are not the same";
    }
    friend ostream& operator<<(ostream &os,Time t);
     friend istream& operator>>(istream &i,Time t);
};
     ostream& operator<<(ostream &os,Time t)
    {
         cout<<"hour-"<<t.hour<<endl<<"minutes-"<<t.min<<endl<<"seconds-"<<t.sec<<endl;
         return cout;
    }
     istream& operator>>(istream &i,Time t)
    {
         cin>>t.hour>>t.min>>t.sec;
         return cin;
    }
int main()
{
    cout<<"enter first time"<<endl<<"--------------------"<<endl;
    int a,b,c;
    cout<<"enter hour:-";
    cin>>a;
    cout<<"enter minutes:-";
    cin>>b;
    cout<<"enter second:-";
    cin>>c;
    Time t1(a,b,c);
    cout<<"first time "<<endl;
    cout<<t1;
    cout<<"enter second time"<<endl<<"--------------------"<<endl;
    int a1,b1,c1;
    cout<<"enter hour:-";
    cin>>a1;
    cout<<"enter minutes:-";
    cin>>b1;
    cout<<"enter second:-";
    cin>>c1;
    Time t2(a1,b1,c1);
    cout<<"second time "<<endl;
    cout<<t2;
    t1==t2;
    cin>>t1;
    getch();
    return 0;
}