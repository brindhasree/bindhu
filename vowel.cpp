#include<iostream>
using namespace std;
class alpha
{
	char n;
	public:
	void test()
	{
		cin>>n;
		if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
		{
			cout<<"vowel";
			}
			else
			
				cout<<"consonant";
				
			
	}
};
int main()
{ 
	alpha a;
a.test();
return 0;
}
