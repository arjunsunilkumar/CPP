/*3. Write a program to use pointer to an object for getting information about a book in a library.
Data members are: Accno, Title, Author,  Price, Issue_date, Return_date and Fine.
 Member functions are: to Assign values to the data members calculate fine and print details of the particular book
Use the data members Title and Author as pointer data members*/
#include<iostream>
using namespace std;
class date
{
	int d, m, y;
public:
double cdays(date b)
{
	double c=0;
	int j=d,k=m,l=y;
	while((d!=b.d)||(m!=b.m)||(y!=b.y))
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		{
			if(d!=31)
			{
				d++;c++;
			}
			else if(d==31&&m==12)
			{
				m=1;
				d=1;c++;
				y++;
			}
			else
			{
				m++;
				d=1;c++;
			}
		}
		else if (m==4||m==6||m==9||m==11)
		{
			if(d!=30)
                        {
				d++;
				c++;
			}
                        else
                        {
                                m++;
                                d=1;c++;
                        }
                }
		else
		{
			if((y%4==0&&y%100!=0)||(y%400==0))
			{
				if(d!=29)
				{
                                	d++;
					c++;
                        	}
				else
                        	{
                                	m++;
                                	d=1;c++;
                       	 	}
			}
			else
			{
				if(d!=28)
				{
                                	d++;c++;
                        	}
				else
                        	{
                                	m++;
                                	d=1;c++;
                        	}
			}
		}
	}
	d=j;
	return c;
}
void inp()
{
	cout<<"Enter the day, month and year ";
	cin>>d>>m>>y;
}
void disp()
{
	cout<<d<<"/"<<m<<"/"<<y;
}
};
class library
{
	int accno;
	char title[50];
	char author[50];
	int price;
	date issue_date;
	date return_date;
	int fine;
	public:
	library()
	{
		cout<<"Enter the book no:- ";
		cin>>accno;
		cout<<"Enter the title of the book ";
		cin>>title;
		cout<<"Enter the author of the book ";
		cin>>author;
		cout<<"Enter the price of the book ";
		cin>>price;
		cout<<"Enter the issue date ";
		issue_date.inp();
		cout<<"Enter the return date ";
		return_date.inp();
		fine=0;
	}
	void calcfine()
	{
		double c=issue_date.cdays(return_date);
		if(c>14)
		fine=(c-14)*50;
		else fine=0;
	}
	void display()
	{
		cout<<"\nBook no:- ";
                cout<<accno;
                cout<<"\nTitle of the book ";
                cout<<title;
                cout<<"\nAuthor of the book ";
                cout<<author;
                cout<<"\nPrice of the book ";
                cout<<price;
                cout<<"\nIssue date:- ";
                issue_date.disp();
                cout<<"\nReturn date:- ";
                return_date.disp();
		cout<<"Fine="<<fine;
	}
};
main()
{
	library a;
	a.calcfine();
	a.display();
}
