#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of element of aaray\n";
	cin>>n;
	int a[n];
	cout<<"Enter element"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	{
		cout<<"Traversing array"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		return 0;
	}
	
	
	
}
