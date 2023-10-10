#include <stdio.h>
int main()
{
	int a, b,c;
	//get user input
	printf("enter two number:");
	scanf_s("%d%d", &a, &b);
	c = a + b;
	printf("%d", c);
	return 0;
}
