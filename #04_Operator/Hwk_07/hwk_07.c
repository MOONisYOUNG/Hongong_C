#include <stdio.h>

int main(void)
{
	double weight, height;
	double bmi;
	
	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf%lf", &weight, &height);

	bmi = weight / (height*height);
	printf("%s\n", (bmi >= 20.0) && (bmi < 25.0) ? \
		"ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	return 0;
}