#include <iostream>
using namespace std;
class prime
{
	int n1,n2,n,c=0;
	public:
	void work()
	{
		cin>>n1>>n2;
		n=n1+1;
		if(n>n1&&n<n2)
		{
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			c++;
			cout<<n;
		}
		if(c==0)
		{cout<<n;
			
	           }
		}
			n++;
		
		
		
	
	}
	
};

int main() {
	// your code goes here
prime p;
p.work();
return 0;
}
