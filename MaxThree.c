#include<stdio.h>
int main()
	{
	int m,n,p;
	printf("Enter three number");
	scanf("%d%d%d",&m,&n,&p);
	
	if(m>n&&m>p)
		printf("MAX{%d,%d,%d}=%d\n",m,n,p,m);
	else if(n>p)
		printf("MAX{%d,%d,%d}=%d\n",m,n,p,n);
	else
		printf("MAX{%d,%d,%d}=%d\n",m,n,p,p);

	return 0;
	}

