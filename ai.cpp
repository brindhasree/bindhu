#include <iostream>
using namespace std;

int main() {
	int n,a,d;
	cin>>n>>a>>d;
	int sum=a;
	for(int i=1;i<n;i++)
	{
	a=a+d;
	sum=sum+a;
	}
	cout<<sum;
	
	
	// your code goes here
	return 0;
}
