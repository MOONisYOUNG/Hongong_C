#include <stdio.h>

void sum(int num);

int main(void)
{
	sum(10);
	sum(100);
	return 0;
}

void sum(int num)
{
	int i, res = 0;

	for (i = 1; i <= num; i++)
	{
		res += i;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", num, res);
}