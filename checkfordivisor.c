#include <stdio.h>

int main(void) {
	int n,c=0;
	scanf("%d",&n);

	for(int i=2;i<n;i++)
	{
		if(n%i==0)
          c++;
	}
          if(c!=0)
          printf("yes");
          else
          printf("no");
	
	
	// your code goes here
	return 0;
}
