#include<stdio.h>
int main()
	{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		printf("%c is alphabet\n",ch);
	else if(ch>='0'&&ch<='9')
		printf("%c is digit\n",ch);
	else
		printf("%c is special character\n",ch);

	return 0;
	}

