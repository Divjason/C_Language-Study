// 사용자로부터 어떤 정수값을 받으세요. 그리고 해당 숫자가 소수인지, 아닌지
// 판단 후 소수이면, 해당 숫자는 소수입니다. 출력
// 소수가 아니면, 해당 숫자는 소수가 아닙니다. 출력
// 1과 본인 자신 외에는 나눌 수 없는 숫자 소수!!!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned num, div;
	bool isPrime; // flag => 무엇인지, 아닌지를 결정하는 변수 요소 플래그, 정수

	scanf("%u", &num);

	/*
		연산처리 진행!
		=> 변수에 값을 담아!!!
	*/

	//for (div = 2; div < num; ++div)
	//{
	//	if (num % div == 0)
	//	{
	//		isPrime = false;
	//		printf("%u is divisible by %u.\n", num, div);
	//	}
	//}

	isPrime = true;

	for (div = 2; (div * div) <= num; ++div)
	{
		if (num % div == 0)
		{
			isPrime = false;

			if (num == div * div)
				printf("%u is divisible by %u.\n", num, div);
			else
				printf("%u is divisible by %u and %u.\n", num, div, num/div);
		}
	}

	if (isPrime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);

	return 0;
}