#include <stdlib.h>
#include <stdio.h>

int main(){
	double num1;
	double num2;
	char op;

	printf("Enter a number\n");
	scanf("%lf", &num1);
	printf("Which operator would you like to use ? \n");
	scanf(" %c", &op);
	printf("Enter a number\n");
	scanf("%lf", &num2);

	if (op == '+')
	{
		printf("The answer is ");
		printf("%f\n", num1 + num2);
	}
	else if (op == '-')
	{
	printf("The answer is ");
	printf("%f\n", num1 + num2);	
	}
	else if (op == '*')
	{
		printf("The answer is ");
		printf("%f\n", num1 * num2);
	}
	else if(op == '/')
	{
		printf("The answer is ");
		printf("%f\n", num1 / num2);
	}
	else
	{
		printf("Please use a valid operator\n");
	} 
}

