#include<iostream>
using namespace std;
float calculate(int n,int t,float p,float r)
{
	float a,amt=1;
	a=(1+r/n);
	for(int i=1;i<=n*t;i++)
	amt=amt*a;
	amt=amt*p;
	return(amt);
}
int main()
{
	float p,r,amt;
	int n,t;
	cout<<"Enter the principal amount:";
	cin>>p;
	cout<<"Enter the interest rate:";
	cin>>r;
	cout<<"Number of times interest is applied:";
	cin>>n;
	cout<<"Number of time periods applied:";
	cin>>t;
	amt=calculate(n,t,p,r);
	cout<<"Amount= "<<amt;
	return 0;
}
