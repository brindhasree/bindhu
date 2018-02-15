#include <iostream>
using namespace std;
class sample
{
	int s;
	int count=0;
	public:
	void check()
	{
	cin>>s;
	cout<<s;
		do
		{
		s=s/10;
		count++;
		}
		while(s!=0);
	 cout<<"\n"<<count;
	}
		
		
	};


int main() {
	sample s;
	s.check();
	// your code goes here
	return 0;
}
