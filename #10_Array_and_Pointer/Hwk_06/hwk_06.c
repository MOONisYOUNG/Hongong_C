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
		printf("�ζ� ��ȣ �Է� :");
		scanf("%d", &lotto_nums[i]);
		temp[i] = lotto_nums[i];

		if (lotto_nums[i] > 0 && lotto_nums[i] <= 45)
			for (j = 0; j < i; j++)
			{
				if (temp[j] == lotto_nums[i])
				{
					printf("���� ��ȣ�� �ֽ��ϴ�!\n");
					i--;
					break;
				}
			}
		else
		{
			printf("1���� 45������ ���� �Է��ϼ���.\n");
			i--;
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;

	printf("�ζ� ��ȣ : ");
	
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}