#include<stdio.h>
int main()
	{
	int a,b,c;
	printf("Enter three sides of triangle");
	scanf("%d%d%d",&a,&b,&c);

	if(a+b>c&&b+c>a&&c+a>b)
		printf("\nTriangle is valid\n");
	else
		printf("\nTriangle is not valid\n");

	return 0;
	}
