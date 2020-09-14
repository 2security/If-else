#include<stdio.h>
int main()
	{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z')
		printf("%c is in lower case\n",ch);
	else if(ch>='A' && ch<='Z')
		printf("%c is in upper case\n",ch);
	else
		printf("%c is not an alphabet",ch);
	
	return 0;
	}

