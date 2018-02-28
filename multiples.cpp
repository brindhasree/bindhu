#include <iostream>
using namespace std;
class multi
{
	int n,i,n1;
	public:
	void work()
	{
		cin>>n;
		for(i=1;i<=5;i++)
		{
		n1=n*i;
		cout<<n1<<endl;
		}
	}
};

int main() {
	multi m;
	m.work();
	// your code goes here
	return 0;
}
