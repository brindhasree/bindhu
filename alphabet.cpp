#include <iostream>
using namespace std;
class sample
{
	char c;
	public:
	void check()
	{
		cin>>c;
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			cout<<"alphabet";
			
		}
		else
		{
			cout<<"not a alphabet";
		}
	}
};

int main() {
sample s;
s.check();
return 0;
}
