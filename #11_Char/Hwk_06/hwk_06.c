#include <stdio.h>

int main(void)
{
	char ch;
	int cnt = 0;
	int temp = 0;
	while ((scanf("%c", &ch) != -1))
	{
		if (ch != '\n')
		{
			cnt++;
		}
		else
		{
			if (temp < cnt) temp = cnt;
			cnt = 0;
		}
	}
	printf("���� �� �ܾ��� ���� : %d", temp);
	return 0;
}