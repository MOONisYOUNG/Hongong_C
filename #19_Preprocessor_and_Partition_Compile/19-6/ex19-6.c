#include <stdio.h>
#define VER 7
#define BIT16

int main(void)
{
	int max;

#if VER >= 6
	printf("���� %d�Դϴ�.\n", VER);
#endif

#ifdef BIT16
	max = 32767;
#else // BIT16
	max = 2147483647;
#endif

	printf("int�� ������ �ִ� : %d\n", max);

	return 0;
}