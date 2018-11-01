#include <stdio.h>
#include <stdlib.h>

int stack[10], a, x, z, y, count, limit;


void push(int a)
{
	stack[count] = a;
	count++;
}

void pop()
{
	count--;
	int pop = stack[count];
	printf("%d\n", pop);
}

int main (){
	int ch, l,b;
	printf("Enter choice 1:Push 2:Pop\n");
	scanf("%d", &ch);
	if (ch == 1)
	{
	 printf("How many would you like to push ?\n");	
	 scanf("%d", &l);
	 for (b=l ; b >0; --b )
	 {
	 	printf("Enter the number you would like to push\n");
		scanf("%d", &y);
		push(y);
		}
	}
	printf("How many of them would you like to pop\n");
	scanf("%d", &limit);
	for (int c = 0; c < limit; ++c)
	{
	 pop();		
	}
}

