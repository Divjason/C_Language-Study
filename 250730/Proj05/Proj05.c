#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // rand, srand
#include <ctype.h>

int main()
{
	int user, computer;

	printf("����(1), ����(2), ��(3) ������ �����մϴ�! �����Ϸ��� 0�� �Է��ϼ���\n");

	while (1)
	{
		printf("����� ������? : ");
		scanf("%d", &user);

		if (user == 0) {
			printf("������ �����մϴ�!\n");
			break;
		}

		if (user < 1 || user > 3) {
			printf("�߸��� �Է��Դϴ�! 1~3������ ���ڸ� �Է����ּ���!\n");
			continue;
		}


	}

	return 0;
}