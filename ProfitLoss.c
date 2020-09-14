#include<stdio.h>
#include<math.h>
int main()
	{
	float SP,CP,t;
	printf("Enter selling and cost price");
	scanf("%f%f",&SP,&CP);
	
	t=SP-CP;
	
	if(t>0)
		printf("\nProfit of rupees: %.2f\n",t);
	else
		printf("\nLoss  of rupees: %.2f\n",-t);

	return 0;
	}	
		
	
	

	
		
