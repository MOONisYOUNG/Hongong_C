#include <stdio.h>

int main(void)
{
	int a, b, res;
	char op; // op�� operator�� ����
	
	printf("��Ģ���� �Է�(����) : ");
	scanf_s("%d%c%d", &a, &op, 1, &b);

	if (op == '+')
	{
		res = a + b;
	}
	else if (op == '-')
	{
		res = a - b;
	}
	else if (op == '*')
	{
		res = a * b;
	}
	else
	{
		res = a / b;
	}

	printf("%d%c%d=%d", a, op, b, res);

	return 0;
}