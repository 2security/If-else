#include<stdio.h>
int main()
	{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("ALPHABET %c is VOWEL",ch);
	else
		printf("ALPHABET %c is CONSONANT",ch);

	return 0;
	}

