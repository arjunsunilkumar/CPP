#include<iostream>
using namespace std;
int a[10][10];
void display(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}

void sort(int n=3)
{
		cout<<"\nEnter the elements:-\n";
		for(int i=0;i<n;i++)
		{
			cout<<"\nRow "<<i+1<<" elements:-\n";
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++){
		for(int j=0;j<n-k-1;j++)
			if(a[i][j]>a[i][j+1])
			{
					int temp=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=temp;
			}
			}
	}
	cout<<"\nSorted matrix:-\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}				
int main()
{
		void sort(int n=3);
	int n;
	char ch;
	cout<<"Do you want to enter the size of the matrix:";
		cin>>ch;
		if(ch=='y')
		{
			cout<<"\nEnter the number of rows:";
			cin>>n;
			sort(n);
		}
		else
			sort();
	
	
}
