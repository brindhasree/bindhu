#include <stdio.h>
#include<math.h>

int main(void) {
	int x;
	float n;
	scanf("%d",&x);
	if(x>360)
	printf("invalid");
	else
	{
	n=sin(x);
	printf("%f",n);
	}
	return 0;
}
