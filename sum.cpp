#include <iostream>
using namespace std;
class sum
{
	int n;
	int sum=0;
	public:
	void add()
	{
		cin>>n;
		
		for(int i=1;i<=n;i++)
		{
			sum=sum+i;
			
		}
		cout<<sum;
	}
};

int main() {
	sum s;
	s.add();
	// your code goes here
	return 0;
}
