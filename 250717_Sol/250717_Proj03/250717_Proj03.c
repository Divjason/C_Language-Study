#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1. ��ȭ ���� �޴´�.
	// 2. �Է¹��� ��ȭ ���� ȯ�� ����ó���� �Ѵ�.
	// 3. ����ó���� �� ���� �޷��� ����Ѵ�.

	int won = 0;
	int dollar = 0;

	printf("Input Won\n");
	scanf_s("%d", &won);

	dollar = won * 0.00072;

	printf("Dollar = %d\n", dollar);

	return 0;
}