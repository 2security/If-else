#include<stdio.h>
int main()
	{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z'||ch>='A'&& ch<='Z')
		printf("%c is ALPHABET",ch);
	else
		printf("%c is not ALPHABET",ch);

	return 0;
	}

