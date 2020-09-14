#include<stdio.h>
int main()
	{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
		
	if(num<0)
		printf("\n Entered number %d is negative number",num);

	else if(num>0)
		printf("\n Entered number %d is positive number ",num);
	else
		printf("\n Entered number %d is equals to 0",num);

	return 0;
	}

