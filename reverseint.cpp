#include <iostream>
using namespace std;
class reverse
{
	int n,r,rev=0;
	public:
	void work()
	{
		cin>>n;
		while (n > 0)
r = n % 10;
rev = rev * 10 + r;
cout<<rev;

	}
	
};

int main() {
	 reverse r;
	 r.work();
	 
	// your code goes here
	return 0;
}
