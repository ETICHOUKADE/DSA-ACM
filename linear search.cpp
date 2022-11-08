#include<iostream>
using namespace std;
int main()
{
	int n,i,num=0,count;
	cout<<"number of element in array"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter number to be searched"<<endl;
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			cout<< a[i]<<"element found at :"<<i<<endl;
			count=1;
		}
   	}
		if(count!=1)
         {
	   cout<<"element not found"<<endl;
		 }
      
	return 0;
}
