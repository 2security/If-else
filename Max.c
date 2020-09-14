#include<stdio.h>
int main()
	{
	int m,n;
	printf("Enter two number");
	scanf("%d%d",&m,&n);
	
	if(m>n)
		printf("MAX{%d,%d}=%d\n",m,n,m);
	else
		printf("MAX{%d,%d}=%d\n",m,n,n);
	return 0;
	}

