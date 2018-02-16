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
};
int main()
{
	sum s;
	s.add();
	return 0;
}
