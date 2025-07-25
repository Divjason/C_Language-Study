#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, sum = 0;
	//int status;

	printf("Enter an Integer (q to quit) : ");
	/*status = scanf("%d", &num);*/

	while (scanf("%d", &num) == 1)
	{
		sum += num;

		printf("Enter an Integer (q to quit) : ");
		/*status = scanf("%d", &num);*/
	}

	printf("sum = %d\n", sum);

	return 0;
}

// 1) 사용자로부터 숫자를 받으세요.
// 2) 사용자가 숫자를 입력한다면, 숫자를 출력합니다.
// 3) 사용자가 숫자가 아닌 알파벳 q를 입력한다면, 더 이상 숫자를 받지 않습니다.
// 4) q를 입력한 이후 그동안 사용자가 입력했던 모든 숫자들의 합을 출력합니다.
// 5) 그리고 콘솔창을 종료합니다.

// flow chart
// Pseudocode -> 실제 코드 작성 전, 직접 코드 작동 프로세스를 사람의 언어로 문장을 작성