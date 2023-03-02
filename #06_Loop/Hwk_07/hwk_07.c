// 소수 (prime number) 출력하기
#include <stdio.h>

int main(void)
{
	int num, k;
	int i = 2;
	int cnt = 0;

	printf("2 이상의 정수를 입력하세요 : ");
	do
	{
		scanf("%d", &num);
	} while (num < 2);

	while (i <= num)
	{
		for (k = 2; k <= i; k++)
		{
			if (k == i)
			{
				printf("%d ", i);
				cnt += 1;
				if (cnt % 5 == 0)
				{
					printf("\n");
				}
			}
			else if (i % k == 0)
			{
				break;
			}
		}
		i++;
	}

	return 0;
}