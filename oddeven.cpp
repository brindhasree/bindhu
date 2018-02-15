#include<iostream>
using namespace std;
class even
{
public:	
int n,n1;
public:
void test()
{
cin>>n;
n1=n%2;
if(n!=0)
{
if(n1==0)
{
cout<<"even";
}
else
{
cout<<"odd";
}
}
else
{
cout<<"zero";
}
}
};
int main()
{
even e;
e.test();
return 0;
}
