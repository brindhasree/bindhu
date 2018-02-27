#include <iostream>
using namespace std;
class even
{
	int n1,n2,s1;
	public:
	void work()
	{
		cin>>n1>>n2;
		for(int i=n1+1;i<n2-1;i++)
		{
			s1=i%2;
			if(s1==1)
			cout<<i<<endl;
		}
	}
};

int main() {
	// your code goes here
	even e;
	e.work();
	return 0;
}
