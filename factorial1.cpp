#include <iostream>
using namespace std;
class fact
{
	int n,f=1,i;
	public:void work()
	{
		cin>>n;
		if(n<=0)
		cout<<"invalid";
		else
		{
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		cout<<f;
		}
		
	}
};

int main() {
	fact f;
	f.work();

	return 0;
}
