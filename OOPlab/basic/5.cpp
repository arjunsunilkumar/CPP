#include<iostream>
using namespace std;
int arraysort(int a[100],int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
main()
{
	int n,a[100];
	cout<<"Enter the number of elements ";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	arraysort(a,n);
	cout<<"sorted:- ";
	for(int i=0;i<n;i++)
		cout<< a[i]<<" ";

}
