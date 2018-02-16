#include<iostream>
using namespace std;
class sum
{
	int n,k,i;
	int c=0;
	int *a=NULL;
	public:
	void add()
	{
		
		cin>>n>>k;
		if(n!=0&&k!=0)
		{
		a= new int[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
for(i=0;i<k;i++)	
{
	c=c+a[i];
}
cout<<c;
		}
		else
			cout<<"no value entered";
		
	}
};
int main()
{
	sum s;
	s.add();
	return 0;
}
