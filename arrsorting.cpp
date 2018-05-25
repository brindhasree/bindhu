#include <iostream>
using namespace std;

int main() 
{
	int n,t;
	int *a= new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)
	{t=a[i];
	for(int j=i+1;j<n;j++)
	{
		if(t>a[j])
		t=a[j];
		cout<<a[j];
		
	}
		
	}
	
}
	return 0;
}
