#include<iostream>
using namespace std;
int midch(int n)
{
	int s=0,m=0;
	s=n%10+((n%1000)/100);
	m=(n%100)/10;
	if(s==m)
		return 1;
	else
		return 0;
}
main()
{
	cout<<"Enter a number ";
	int n;
	cin>>n;
	if(midch(n))
		cout<<"condition satisfied ";
	else
		cout<<"Condition is not met";
}
