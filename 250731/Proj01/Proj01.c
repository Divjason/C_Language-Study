#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // rand -> 난수, srand -> 정밀한 난수
#include <time.h> // 현 시점의 시간

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

	printf("가위(1), 바위(2), 보(3) 게임을 시작합니다! 종료를 하시려면 0을 입력하세요!\n");

	while (1)
	{
		printf("\n당신의 선택(1: 가위, 2: 바위, 3: 보, 0: 종료) : ");
		scanf("%d", &user);

		if (user == 0)
		{
			printf("게임을 종료합니다\n");
			break;
		}

		if (user < 1 || user > 3)
		{
			printf("잘못된 입력입니다! 1~3 사이의 숫자를 입력하세요!\n");
			continue;
		}

		computer = (rand() % 3) + 1;

		printf("컴퓨터의 선택 : %d\n", computer);

		int result = whowins(user, computer);

		if (result == 0)
		{
			printf("비겼습니다!\n");
		} 
		else if (result == 1) 
		{
			printf("당신이 이겼습니다!\n");
		}
		else {
			printf("컴퓨터가 이겼습니다!\n");
		}
	}


	return 0;
}