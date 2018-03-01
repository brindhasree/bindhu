#include <iostream>
#include<cstring>
using namespace std;
class conc
{
	string s1,s2,s3;
	public:
	void work()
	{
		getline(cin,s1);
		getline(cin,s2);
		s3=strcat(s1,s2);
		cout<<s3;
		
	}
	
};

int main() {
	conc c;
	c.work();
	
	// your code goes here
	return 0;
}
