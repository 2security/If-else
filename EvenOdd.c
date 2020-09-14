#include<stdio.h>
int main()
	{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	
	if(num%2==0)
		printf("\n %d is even number\n",num);
	else
		printf("\n %d is odd number\n",num);

	return 0;
	}

