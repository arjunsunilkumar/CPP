#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
class figure
{
	int ar,l,b,a,c,r,f;
	public:
	figure(int x)
	{
		r=x;
		ar=3.14*r*r;
		f=0;
	}
	figure(int x,int y)
	{
		l=x;
		b=y;
		ar=l*b;
		f=1;
	}
	figure(int x,int y, int z)
	{
		a=x;
		b=y;
		c=z;
		int s=(a+b+c)/2;
		ar=s*(s-a)*(s-b)*(s-c);
		ar=sqrt(ar);
		f=2;
	}
	void display()
	{
		switch (f)
		{
			case 0:
				cout<<"\nRadius of circle= "<<r<<"\nArea of circle= "<<ar;
				break;
			case 1:
				cout<<"\nLength and breadth of rectangle= "<<l<<" "<<b<<"\nArea of rectangle= "<<ar;
				break;
			case 2:
				cout<<"\nSides of triangle= "<<a<<" "<<b<<" "<<c<<"\nArea of Triangle= "<<ar;
				break;
		}
	}
};

main()
{
	while(1)
	{
		cout<<"\n1.Circle\n2.Rectangle\n3.Triangle\nEnter an option:-";
		int o;
		cin>>o;
		switch(o)
		{
			case 1:
			{
				int r;
				cout<<"Enter the radius of the circle ";
				cin>>r;
				figure a(r);
				a.display();
				break;
			}
			case 2:
			{
			       int l,b;
			       cout<<"Enter the length and breadth of the rectangle ";
			       cin>>l>>b;
			       figure a(l,b);
			       a.display();
			       break;
			}
			case 3:
                        {
			       int x,y,z;
                               cout<<"Enter the sides of the triangle ";
                               cin>>x>>y>>z;
                               figure a(x,y,z);
                               a.display();
                               break;
                        }
			default:
                        	exit(0);
		}
	}
}
