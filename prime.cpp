#include <iostream>
using namespace std;
class prime
{
	int n,i,n1,count=0;
	public:
	void work()
	{
		cin>>n;
		for(i=2;i<n;i++)
		{
			n1=n%i;
			if(n1==0);
			{
			cout<<n1;
		
			count++;
			}

		}
		if(count==0)
		cout<<n<<"is prime";
		else
		cout<<"not prime";
	}
};

int main() {
	prime p;
	p.work();
	// your code goes here
	return 0;
}
