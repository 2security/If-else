#include<stdio.h>
int main()
	{
	int a,b,c;
	printf("Enter three angles");
	scanf("%d%d%d",&a,&b,&c);
		
	if((a+b+c)==180&&a>0&&b>0&&c>0)
		printf("\n Triangle is valid\n");
	else
		printf("\nTriangle is not valid\n");

	return 0;
	}
