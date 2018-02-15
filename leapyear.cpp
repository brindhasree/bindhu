#include <iostream>
using namespace std;
class leap
{
	int year;
	public:
	void get()
	{
		cin>>year;
		
	}
	void check()
	{
		if(year%4==0)
		
			cout<<"leap year";
			else 
			cout<<"not leap year";
		
	}
};

int main() {
	leap l;
	l.get();
	l.check();
	return 0;
	// your code goes here
	return 0;
}
