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

if(expression => ���ǽ�, ���� ���� => true // false)
statement

*/

/*

if(expression)
	statement 1
else
	statement 2

*/

// ����ڿ��� � ���� �����ð�, �ش� ���� ¦���̸�, even ���� ����ϰ�, ���� Ȧ����
// odd�� ��µǰ� ���ּ���!!!
// %������ �������� ��, -> 2 => 0 ¦��, => 1 Ȧ��