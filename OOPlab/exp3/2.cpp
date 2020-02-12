#include<iostream>
#include<string.h>
using namespace std;
void sum(int,int);
void sum(int);
void sum(char[],char[]);
int main()
{
   int a,b,n;
   char s1[20],s2[20];
   cout<<"Enter two numbers:";
   cin>>a>>b;
   cout<<"Enter a number:";
   cin>>n;
   cout<<"Enter two strings:";
   cin>>s1>>s2;
   sum(a,b);
   sum(n);
   sum(s1,s2);
}
void sum(int a,int b)
{
    cout<<"\nSum of the two numbers="<<a+b;
}
void sum(int n)
{
    int s=0;
    while(n>0)
    {
        int r=n%10;
        s=s+r;
        n=n/10;
    }
    cout<<"\nSum of digits of the number="<<s;
}
void sum(char s1[],char s2[])
{
    strcat(s1,s2);
    cout<<"\nSum of the two strings is:"<<s1<<endl;
}
