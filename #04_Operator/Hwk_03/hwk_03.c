#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4; // 각 과목의 신청 학점
	int credits; // 전체 학점 
	int res; // 최종 결과 (1 or 0으로 출력)
	double kscore = 3.8, escore = 4.4, mscore = 3.9; // 각 과목의 평점
	double grade; // 평점 평균

	credits = kor + eng + mat;
	grade = (kor * kscore + eng * escore + mat * mscore) / credits;
	res = (credits >= 10) && (grade > 4.0);
	printf("결과 : %d\n", res);

	return 0;
}