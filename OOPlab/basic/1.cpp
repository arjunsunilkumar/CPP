#include<iostream>
using namespace std;
main()
{
	int a,i,j,f;
	cout<<"Enter a number:-";
	cin>>a;
	for(i=2;i<a;i++)
		if(a%i==0)
		{
			f=0;
			for(j=2;j<i;j++)
				if(i%j==0)
					f=1;
			if(f==0)
				cout<<i<<" ";
		}
}
