#include <iostream>
using namespace std;
class calc
{
	int n;
	double n1;
	public:
	void work()
	{
		cin>>n;
		n1=n/60;
		if(n1>=60)
		n1=n1/60;
		cout<<n1;
	}
};

int main() {
	calc t;
	t.work();
	// your code goes here
	return 0;
}
