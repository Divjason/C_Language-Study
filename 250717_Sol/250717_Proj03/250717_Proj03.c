#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1. 원화 값을 받는다.
	// 2. 입력받은 원화 값을 환율 연산처리를 한다.
	// 3. 연산처리를 한 값을 달러로 출력한다.

	int won = 0;
	int dollar = 0;

	printf("Input Won\n");
	scanf_s("%d", &won);

	dollar = won * 0.00072;

	printf("Dollar = %d\n", dollar);

	return 0;
}