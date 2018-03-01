#include <iostream>
using namespace std;
class prime
{
	int n,c=0;
	public:
	void work()
	{
		cin>>n;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			c++;
		}
		if(c==0)
		cout<<"prime";
		else
		cout<<"not prime";
	}
};

int main() {

prime p;
p.work();
return 0;
}
