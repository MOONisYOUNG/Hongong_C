#include <stdio.h>

int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	return 0;
}

int get_num(void)
{
	int num;

	do
	{
		printf("��� �Է� : ");
		scanf("%d", &num);
	} while (num < 0);

	return num;
}