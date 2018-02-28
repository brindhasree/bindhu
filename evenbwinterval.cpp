#include <iostream>
using namespace std;
class even
{
	int n,n1;
	public:
	
	void find()
	{
		cin>>n>>n1;
		for(int i=n+1;i<n1;i++)
		{
		if(i%2==0)
		cout<<i<<endl;
		}
		
	}
};

int main() {
	even e;
	e.find();
	// your code goes here
	return 0;
}
