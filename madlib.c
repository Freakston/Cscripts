#include <stdlib.h>
#include <stdio.h>

int main()
{
	char color[10];
	char pluralNoun[10];
	char celebrity[20];
	printf("Enter a color : ");
	scanf("%s", color);
	printf("Enter a pluralNoun : ");
	scanf("%s", pluralNoun);
	printf("Enter a celebrity : ");
	scanf("%s", celebrity);
	printf("Roses are %s\n", color);
	printf(" %s are blue\n", pluralNoun);
	printf("I love %s\n", celebrity);
}