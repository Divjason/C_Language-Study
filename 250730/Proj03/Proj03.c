#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;

	//ch = getchar(); // buffer
	///*putchar(ch);*/

	while ((ch = getchar()) != '\n')
	{
		//if (ch == 'f' || ch == 'F')
		//	ch = 'X';

		/*if (ch == 'F')
			ch = 'X';*/

		/*else if (ch == 'F')
			ch = 'X';*/

		//if (ch == '0')
		//	ch = '*';

		//if (ch == '1')
		//	ch = '*';

		//if (ch == '2')
		//	ch = '*';

		//if (ch == '3')
		//	ch = '*';

		//if (ch == '4')
		//	ch = '*';
		//....

		//for (int i = '0'; i <= 9; ++i)
		//{
		//	if (ch == i)
		//		ch = '*';
		//}

		//if (ch >= '0' && ch <= '9')
		//	ch = '*';

		if (ch >= 'a' && ch <= 'z')
			ch -= 'a' - 'A';
		else if (ch >= 'A' && ch <= 'Z')
			ch += 'a' - 'A';

		putchar(ch);

		/*ch = getchar();*/
	}

	putchar(ch);


	return 0;
}

/*

1) 표준 입출력 함수
- getchar() : 한 글자씩 입력 받을 때
- putchar() : 한 글자씩 출력 할 때

// 분명히 한 글자씩 입력을 받긴했으나, 임시저장소 buffer 에 저장 => 문장 혹은 단어가 종결되었다로
판단할 수 있는 신호가 오면 해당 임시저장소에 저장되고 있던 모든 문자열을 임시저장소에서
빼와서 출력하는 시스템!!!!

// 사용자에게 문자 혹은 숫자를 입력받으시고, 만약 숫자의 경우에는 * 처리 후 출력!

*/