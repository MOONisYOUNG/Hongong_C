#include <stdio.h>

void my_gets(char* ps);

int main(void)
{
	int i = 0;
	char str[20];
	char str_2[20];
	char ch;

	do
	{
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');

	str[--i] = '\0';
	printf("Ãâ·Â : %s", str);

	return 0;
}
