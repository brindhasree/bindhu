#include<iostream>
using namespace std;
class greatest
{
	int a,b,c;
	public:
	void find()
	{
		cin>>a>>b>>c;
		cout<<a<<b<<c<<endl;
		if(a==b&&b==c)
		
		 cout<<"all are equal";
		else
		{
		if(a>b)
		{
			if(a>c)
			cout<<"a is greater";
			else
			cout<<"c is greater";
		}
		else
		{
			if(b>c)
			cout<<"b is  greater";
			else
			cout<<"c is greater";
			
		}
		}
	}
};
int main()
{ 
	greatest g;
	g.find();
	return 0;
}
	
