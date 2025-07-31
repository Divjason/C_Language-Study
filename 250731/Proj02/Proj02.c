// 과세표준 : 소득이 발생하면, 해당 소득에 매길 세금이 존재, 세금을 부과할 기준
/*
	과세표준 계산방식 :
	만약 5000만원의 소득이 발생했다면,
	1200만원을 기준으로 6% 세금 부과
	3400만원은 15% 세금 부과
	400만원은 24% 세금 부과

	=> 최종 세금 합계 금액!!!!

	// 사용자로부터 소득금액을 입력받았을 때, 실제 사용자가 내야하는 세금이 얼마인지
	출력해주는 프로그램을 만들어보세요!!!
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 상수값으로 사전 세율 & 소득 구간 정의

#define BASE1 12000000.0
#define BASE2 46000000.0
#define BASE3 88000000.0
#define BASE4 150000000.0
#define BASE5 300000000.0
#define BASE6 500000000.0

#define RATE1 (6.0 / 100.0)
#define RATE2 (15.0 / 100.0)
#define RATE3 (24.0 / 100.0)
#define RATE4 (35.0 / 100.0)
#define RATE5 (38.0 / 100.0)
#define RATE6 (40.0 / 100.0)
#define RATE7 (42.0 / 100.0)

#define BASIC_DEDUCTION 1500000.0

int main()
{
	double income = 0.0;
	double tax = 0.0;

	scanf("%lf", &income);

	income -= BASIC_DEDUCTION;

	if (income <= BASE1)
	{
		tax = income * RATE1;
	}
	else if (income <= BASE2)
	{
		tax = BASE1 * RATE1 + (income - BASE1) * RATE2;
	}
	else if (income <= BASE3)
	{
		tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (income - BASE3) * RATE3;
	}

	printf("Tax is = %f\n", tax);
	printf("Your income after tax deduction = %f", income - tax);

	return 0;
}
