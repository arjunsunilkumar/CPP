#include<iostream>
using namespace std;
main()
{
	int x1,x2,x3,n;
	cout<<"Enter limit ";
	cin>>n;
	x1=0;
	x2=1;
	if((n<3) && (n>0))
	{
		if(n==2)
			cout<<"0 1";
		else if(n==1)
			cout<<"0";
	}
	else if(n>=3)
	{
		cout<<"0 1";
		for(int i=2;i<n;i++)
		{
			x3=x1+x2;
			cout<<" "<<x3;
			x1=x2;
			x2=x3;
		}
	}
	else
		cout<<"Invalid limit";
}
