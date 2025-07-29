#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_pow(int base, int exp)
{
	int i, result;

	result = 1;
	for (i = 0; i < exp; ++i) {
		result *= base;
	}

	return result;
}

main()
{
	// 3 4 = 3^4 = 81
	// 3 * 3 * 3 * 3

	int base, exp, result;

	while (scanf("%d %d", &base, &exp) == 2)
	{
		//result = 1;
		//for (i = 0; i < exp; ++i) {
		//	result *= base;
		//}

		result = compute_pow(base, exp);

		printf("Result = %d\n", result);
	}

	return 0;

	/*
	사용자에게 숫자 2개를 입력받으세요.
	첫번째 숫자는 제곱근의 "밑" 역할, 두번째 숫자는 제곱근의 "지수"
	역할-> 해당 제곱근의 결과값을 콘솔창에 출력해주세요!!!

	ex) 2 10 => 2^10 = 1024
	ex) 3 2 => 3^2 = 9
	*/
}