include <iostream>
using namespace std;
class power
{
	float n,k;
	float s=1;
	public:
	void  mul()
	{
		
	
		
		cin>>n>>k;
		for(int i=0;i<k;i++)
		{
			s=s*n;
			
		}
		cout<<s;
		
	}
};
int main() {
	power p;
	p.mul();
	
	// your code goes here
	return 0;
