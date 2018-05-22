#include <iostream>
using namespace std;

int main() {
	int n,n1,n2,n3,sum=0,count=1;
	cin>>n1;
	n=n1;
	n2=n1;
	do
	{
		n=n/10;
		if(n>0)
		count++;
		
	}while(n>0);
	//cout<<count<<endl;
	do
	{
		n3=n2%10;
		sum=sum+(n3*n3*n3);
		//cout<<sum<<endl;
		n2=n2/10;
		
	}while(n2>0);
//	cout<<sum;
	if(sum==n1)
	cout<<"yes";
	else
	cout<<"no";
	// your code goes here
	return 0;
}
