#include <iostream>
using namespace std;

int main() {
	int k,i,sum=0;
	cin>>k;
	if(k>0)
	{
	for(i=1;i<k+1;i++)
	{
		sum=sum+i;
	}
	cout<<sum;
	}
	else
	cout<<"invalid";
	// your code goes here
	return 0;
}
