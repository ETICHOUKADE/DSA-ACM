#include<iostream>
using namespace std;
int main()
{
	int n,num,i;
	cout<<"number of element of array\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter index at which number should be inserted"<<endl;
	cin>>num;
	n=n+1;
	for(i=n;i>=num;i--)
	{
	 a[i+1]=a[i];
	}
	cout<<"Enter the number to inserted"<<endl;
	cin>>a[num];
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	  return 0;
	}
