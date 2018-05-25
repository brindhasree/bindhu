#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<a[i]<<i<<endl;
	}
	// your code goes here
	return 0;
}
