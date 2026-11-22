#include <stdio.h>

void swap(int *a, int  *b)
{
	tmp = *a;
	*a = *b;
	*b = *a;
}

int main()
{
	int x = 9;
	printf("HI! x is: %d", x);

	printf("I LOVE C!");

	int a = 8;
	int y = 9;

	swap(&a, &b);

	return 0;
}