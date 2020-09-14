#include<stdio.h>
int main()
	{
	int a,b,c;
	printf("Enter three angles of triangle");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b&&b==c&&c==a)
		printf("\nTriangle is equilateral \n");
	
	else if(a==b||b==c||c==a)
		printf("\nTriangle is isosceles\n");
	
	else
		printf("\nTriangle is scalene\n");

	return 0;
	}
