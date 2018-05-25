#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin,str);
	int count=0;
	int n=str.length();
	for(int i=0;i<n;i++)
	{
		if(str[i]=='.')
		{
			count++;
		}
	}
	cout<<count;
	// your code goes here
	return 0;
}
