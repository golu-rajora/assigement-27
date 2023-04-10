//6. Create a class CString to represent a string. 
 //a) Overload the + operator to concatenate two strings.
 //b) == to compare 2 strings.
 #include<iostream>
 #include<conio.h>
 #include<cstring>
 using namespace std;
 class Cstring
 {
     char x[20];
     public:
     Cstring(char a[])
     {
          strcpy(x,a);
     }
     Cstring()
     {

     }
     void display()
     {
         cout<<x;
     }
     Cstring operator + (Cstring b)
     {
    
        return strcat(x,b.x);

     }
     int operator==(Cstring b)
     {
        for(int i=0;x[i]!='/0';i++)
        {
            if(x[i]!=b.x[i])
               return 0;
               break;
        }
           return 1;
     }
      
 };
   int main()
   {
       char a[20];
       char b[20];
       cout<<"enter first name:-";
       cin.getline(a,20);
       Cstring s1(a);
       cout<<"enter middle name:-";
       cin.getline(b,20);
       Cstring s2(b);
       Cstring s3=s1+s2;
       cout<<"concatenate two strings is:-";
       s3.display();
       if(s1==s2)
       cout<<endl<<"both string are the same";
       else
       cout<<endl<<"both string are not the same";
       getch();
       return 0;
   }