#include<iostream>
using namespace std;
main()
{
	int n,rev=0,ori;
	cout<<"Enter the number ";
	cin>>n;
	ori=n;
	while(n!=0)
	{
		rev=rev*10+(n%10);
		n=n/10;
	}
	if(rev==ori)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
}
