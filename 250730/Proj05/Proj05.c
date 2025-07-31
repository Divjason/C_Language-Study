#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // rand, srand
#include <ctype.h>

int main()
{
	int user, computer;

	printf("가위(1), 바위(2), 보(3) 게임을 시작합니다! 종료하려면 0을 입력하세요\n");

	while (1)
	{
		printf("당신의 선택은? : ");
		scanf("%d", &user);

		if (user == 0) {
			printf("게임을 종료합니다!\n");
			break;
		}

		if (user < 1 || user > 3) {
			printf("잘못된 입력입니다! 1~3사이의 숫자를 입력해주세요!\n");
			continue;
		}


	}

	return 0;
}