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
	����ڿ��� ���� 2���� �Է¹�������.
	ù��° ���ڴ� �������� "��" ����, �ι�° ���ڴ� �������� "����"
	����-> �ش� �������� ������� �ܼ�â�� ������ּ���!!!

	ex) 2 10 => 2^10 = 1024
	ex) 3 2 => 3^2 = 9
	*/
}