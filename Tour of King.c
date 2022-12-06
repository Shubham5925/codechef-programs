#include <stdio.h>

int main(void) 
{
	int t,n,m,sum=0;
	scanf("%d\n",&t);
	if(t>=1 && t<=100)
	{
	        for(int i=1;i<=t;i++)
	        {
	                scanf("%d %d\n",&n,&m);
	                if(n>=0 && m<=100)
	                {
	                        sum=n*5+m*7;
	                }
	                printf("%d\n",sum);
	                sum=0;
	        }
	}
	return 0;
}

