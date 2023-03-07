#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j;
	int temp[6];

	for (i = 0; i < 6; i++)
	{
		printf("로또 번호 입력 :");
		scanf("%d", &lotto_nums[i]);
		temp[i] = lotto_nums[i];

		if (lotto_nums[i] > 0 && lotto_nums[i] <= 45)
			for (j = 0; j < i; j++)
			{
				if (temp[j] == lotto_nums[i])
				{
					printf("같은 번호가 있습니다!\n");
					i--;
					break;
				}
			}
		else
		{
			printf("1부터 45까지의 수만 입력하세요.\n");
			i--;
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;

	printf("로또 번호 : ");
	
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}