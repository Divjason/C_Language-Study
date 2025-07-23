#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int seconds = 0, minutes = 0, hours = 0;

	// 연산처리!!!
	// 사용자로부터 초값을 받아서, 해당 초값이 시.분.초 계산했을 때, 어떻게 출력될 수 있는지 연산식 구현
	printf("Input Seconds : ");
	scanf("%d", &seconds);

	while (seconds >= 0)
	{
		minutes = seconds / 60;
		seconds %= 60;

		hours = minutes / 60;
		minutes %= 60;

		printf("Input Seconds : ");
		scanf("%d", &seconds);

		printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
	}
	return 0;
}