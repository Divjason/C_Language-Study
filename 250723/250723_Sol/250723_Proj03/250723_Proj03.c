#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int seconds = 0, minutes = 0, hours = 0;

	// ����ó��!!!
	// ����ڷκ��� �ʰ��� �޾Ƽ�, �ش� �ʰ��� ��.��.�� ������� ��, ��� ��µ� �� �ִ��� ����� ����
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