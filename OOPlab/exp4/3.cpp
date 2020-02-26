

---------- Forwarded message ---------
From: Athira Sankar <athirasankar1794@gmail.com>
Date: Wed, 26 Feb 2020 at 10:49
Subject: 4,3
To: <arjunglal.me@gmail.com>


#include<iostream>
using namespace std;
class student
{
public:
int rno;
char name[20];
void getd()
{
cout<<"enter roll and name"<<"\n";
cin>>rno>>name;
}

};
class subject:public virtual student
{
public:
float m1;
float m2;
float m3;
void getd()
{
student::getd();
cout<<"enter marks of subjects"<<"\n";
cin>>m1>>m2>>m3;

}

};
class language:public virtual student
{
public:
float m4;
float m5;
void getd()
{
cout<<"enter marks of 2 languages"<<"\n";
cin>>m4>>m5;
}
};
class result:public subject,public language
{
public:
float total;
void getd()
{ subject::getd();
language::getd();
total=m1+m2+m3+m4+m5;
cout<<"name: "<<"\n";
cout<<"roll no: "<<rno<<"\n";
cout<<"total :"<<total<<"\n";
cout<<"mark of sub "<<1<<":"<<m1<<"\n";
cout<<"mark of sub "<<1<<":"<<m2<<"\n";
cout<<"mark of sub "<<1<<":"<<m3<<"\n";
cout<<"mark of language 1:"<<m4<<"\n";
cout<<"mark of language 2: "<<m5<<"\n";

}
};
main()
{
result s;
s.getd();
}
