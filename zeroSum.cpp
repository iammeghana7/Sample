#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter no of elements:\t";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements:\t";
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int sum=a[i];
		for(int j=i+1;j<n;j++)
		{
			sum=sum+a[j];
			
			if(sum==0)
			{
				cout<<"Sub array is "<<a[i]<<" to "<<a[j]<<endl;
			}
		}
		
	}

}
