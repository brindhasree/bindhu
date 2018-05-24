#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin,str);
	//cout<<str;
	int len,count=0;
	len=str.length();
	//cout<<len<<endl;
	for(int i=0;i<len;i++)
	{
		if(str[i]==' '||str[i]=='.')
		{
			count++;
			
		}
		
	}
		if(str[len-1]=='.')
		{count--;
		}
	
	cout<<count;
	// your code goes here
	return 0;
}
