#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���迬����
// ������, �� �ڷ��� ���迡 ���ؼ� ������ �ϴ� ������!!
// Relational Operators

/*
	<
	<=
	==
	>=
	>
	!=
*/

int main()
{
	//int n = 0;

	//while (n++ < 5) {
	//	printf("%d\n", n);
	//}

	//char c = 'A';

	//while (c != 'Z') {
	//	printf("%c\n", c++);
	//}

	const double PI = 3.14159265358946576865465;
	double guess = 0.0;

	printf("Input pi : ");
	scanf("%lf", &guess);

	while (guess != PI) {
		printf("Fool! Try Again!\n");
		scanf("%lf", &guess);
	}

	printf("Good!");

	return 0;
}