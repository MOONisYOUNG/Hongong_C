#include <stdio.h>

int main(void)
{
	char str[50] = { 0 };
	int size, i, cnt = 0;

	printf("���� �Է� : ");
	gets_s(str, sizeof(str));

	size = sizeof(str) / sizeof(str[0]);

	for (i = 0; i < size; i++)
	{
		if (str[i] == '\0') break;
		
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + ('a' - 'A');
			cnt++;
		}
	}

	printf("�ٲ� ���� : ");
	puts(str);
	printf("�ٲ� ���� �� : %d", cnt);
	
	return 0;
}