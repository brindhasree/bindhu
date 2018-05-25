#include <iostream>
using namespace std;

int main() {
	int n,n1,sum=0;
	cin>>n;
	
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	sum=sum/n;
	cout<<sum;
	return 0;
}
