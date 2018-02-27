#include <iostream>
using namespace std;
class pali
{
	int s,s1=1,b1,b2;
	public:
	void work()
	{
		cin>>s;
	
		b1=s;
while(b1>10)
{

	 b2=b1%10;
	s1=(s1*10)+s1;
	b1=b1/10;
	
};
		
		cout<<s1;
		if(s==s1)
		cout<<"palindrome";
		else
		cout<<"not a palindrome";
	
		
		
		
	}
};

int main() {
	// your code goes here
pali p;
p.work();
return 0;
}
