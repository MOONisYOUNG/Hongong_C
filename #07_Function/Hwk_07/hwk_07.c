#include <stdio.h>

int rec_func(int n);

int main(void)
{
	printf("%d\n", rec_func(10));

	return 0;
}

int rec_func(int n)
{
	if (n == 0) return 0;
	return n + rec_func(n-1);
}