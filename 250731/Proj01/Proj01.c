#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // rand -> ����, srand -> ������ ����
#include <time.h> // �� ������ �ð�

int whowins(int user, int computer)
{
	if (user == computer)
	{
		return	0;
	}
	else if ((user == 1 && computer == 3) || 
			 (user == 2 && computer == 1) || 
			 (user == 3 && computer == 2))
	{
		return 1;
	}
	else {
		return -1;
	}
}

int main()
{
	int user, computer;
	srand(time(NULL));

	printf("����(1), ����(2), ��(3) ������ �����մϴ�! ���Ḧ �Ͻ÷��� 0�� �Է��ϼ���!\n");

	while (1)
	{
		printf("\n����� ����(1: ����, 2: ����, 3: ��, 0: ����) : ");
		scanf("%d", &user);

		if (user == 0)
		{
			printf("������ �����մϴ�\n");
			break;
		}

		if (user < 1 || user > 3)
		{
			printf("�߸��� �Է��Դϴ�! 1~3 ������ ���ڸ� �Է��ϼ���!\n");
			continue;
		}

		computer = (rand() % 3) + 1;

		printf("��ǻ���� ���� : %d\n", computer);

		int result = whowins(user, computer);

		if (result == 0)
		{
			printf("�����ϴ�!\n");
		} 
		else if (result == 1) 
		{
			printf("����� �̰���ϴ�!\n");
		}
		else {
			printf("��ǻ�Ͱ� �̰���ϴ�!\n");
		}
	}


	return 0;
}