#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets_s(str, sizeof(str));
	puts("입력된 문자열 : ");
	puts(str);

	return 0;
}