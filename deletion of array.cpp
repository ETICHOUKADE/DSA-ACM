#include<iostream>
using namespace std;
int main()
{
	int n,i,num,t;
	cout<<"number of element in array\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"Enter number to deleted"<<endl;
	cin>>num;
	{
		if(a[i]==num)
		{t=i;}
		
	}
	for(i=t;i<n;i++)
	{
	a[i]=a[i+1];
	}
	n=n-1;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
