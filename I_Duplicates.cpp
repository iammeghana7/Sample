#include<iostream>
using namespace std;

int check(int b[],int j,int ele)
{
	for(int i=0;i<j;i++)
	{
		if(b[i]==ele)
		{
			return 0;
		}
		
	}
	cout<<"\nCheck is returning 1";
	return 1;
}
int main()
{
	int n;
	cout<<"\nEnter no of elements:\t";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n],j=0,index;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			a[i]=-a[i];
		}
		index=a[i]-1;
		cout<<"\nIndex is "<<index;
		cout<<"\nA[index] is "<<a[index];
		if(a[index]<0 && check(b,j,a[i]))
		{
			cout <<"\n "<<a[index]<<" is less than zero so appending to b ";
			b[j]=a[i];
			a[i]=-a[i];
			cout<<"\n in b it is "<<b[j];
			j++;
		}
		else if(a[index]>0)
		{
			a[index]=-a[index];
		}

	}
	cout<<"\nDuplicate elements are:\t";
	for(int i=0;i<j;i++)
	{
		cout<<b[i]<<"\t";
	}
}
