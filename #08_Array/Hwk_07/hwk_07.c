#include <stdio.h>

int main(void)
{
	char str[50] = { 0 };
	int size, i, cnt = 0;

	printf("문장 입력 : ");
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

	printf("바뀐 문장 : ");
	puts(str);
	printf("바뀐 문자 수 : %d", cnt);
	
	return 0;
}