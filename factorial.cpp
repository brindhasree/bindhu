#include <iostream>
using namespace std;
class fact
{
	int n,f=1;
	public:
	void work()
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			f=f*i;
		}
		cout<<f;
	}
};

int main() {
	fact fa;
	fa.work();
	// your code goes here
	return 0;
}
