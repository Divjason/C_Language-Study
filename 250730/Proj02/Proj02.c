#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("Input a Positive integer : ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("Even");
	//else
	//	printf("Odd");

	else if (number % 2 != 0)
		printf("Odd");

	//if (number % 2 != 0)
	//	printf("Odd");

	//if (number % 2 == 1)
	//	printf("Odd");

	return 0;
}

/*

if(expression => 조건식, 값을 도출 => true // false)
statement

*/

/*

if(expression)
	statement 1
else
	statement 2

*/

// 사용자에게 어떤 값을 받으시고, 해당 값이 짝수이면, even 값을 출력하고, 만약 홀수면
// odd가 출력되게 해주세요!!!
// %연산자 나누었을 때, -> 2 => 0 짝수, => 1 홀수