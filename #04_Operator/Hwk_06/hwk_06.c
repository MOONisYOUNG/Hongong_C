#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int) time;
	time = (time - hour) * 60;
	min = (int) time;
	time = (time - min) * 60;
	sec = (int) time;
	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, min, sec);

	return 0;
}