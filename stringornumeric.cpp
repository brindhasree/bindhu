#include <iostream>
using namespace std;

int main() {
	string str;
	int n1,c=0;
	getline(cin,str);
	int n=str.length();
	for(int i=0;i<n;i++)
	{
		n1=(int)str[i];
		
		
		
		if((n1>=48)&&(n1<=57))
		
			c++;
	}
		if(c>0)
		cout<<"numeric";
		else
		cout<<"string";
		
		
	
	// your code goes here
	return 0;
}
