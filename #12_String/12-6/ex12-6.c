#include <stdio.h>

int main(void)
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);
	fgetc(stdin);
	printf("�̸� �Է� : ");
	gets_s(name, 20);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}