#include <stdio.h>

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets_s(str, 80);
	printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}