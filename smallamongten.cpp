#include <iostream>
using namespace std;

int main() {
	int n[10],i,n1;
	for(i=0;i<10;i++)
	{
		cin>>n[i];
		
	}
	n1=n[0];
	for(i=0;i<10;i++)
	{
		if(n1<n[i])
		{
			n1=n[i];
	}
	}
	cout<<n1;
	
	// your code goes here
	return 0;
}
