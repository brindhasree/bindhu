#include <iostream>
using namespace std;
class maxi
{
	int n,i,a[2],n1;
	public:
	void work()
	{
		cin>>n;
		for(i=0;i<3;i++)
		{cin>>a[i];
		}
		n1=n;
		i=0;
		while(i<3)
		{
			if(n1>a[i])
			{
				n1=a[i];
			}
			i++;
		};
		cout<<n1;
	}
};

int main() {
	maxi m;
	m.work();
	

	return 0;
}
