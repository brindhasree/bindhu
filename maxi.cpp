#include <iostream>
using namespace std;
class maxi
{
	int n,i,a[2],t;
	public:
	void work()
	{
		cin>>n;
		int *a=new int[n];
		for(i=0;i<n;i++)
		{cin>>a[i];
		}
	
		i=0;
		t=a[i];
	
		while(i<n)
		{
			if(t<a[i])
			{
				t=a[i];
				
			}i++;
			
		};
		cout<<t;
	}
};

int main() {
	maxi m;
	m.work();
	

	return 0;
}
