#include <stdlib.h>
#include <stdio.h>
int main()
{
	char grade;
	scanf(" %c", &grade);
	switch(grade){
		case 'A' :
			printf("You did great\n");
			break;
		case 'B':
			printf("You did good\n");
			break;
		case 'C':
			printf("You did poorly\n");
			break;
		case 'D':
			printf("Youd did very bad\n");
			break;
		case 'F':
			printf("You failed\n");
			break;
		}
}		
