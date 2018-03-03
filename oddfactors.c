#include <stdio.h>
int main()
{
    int n, i;

    
    scanf("%d",&n);

    if(n%2==0)
    {
    	printf("no even factor")
    	
    }
    else
    {
    for(i=1; i <= number; ++i)
    {
        if (number%i == 0)
        {
            printf("%d ",i);
        }
    }
    }

    return 0;
}
