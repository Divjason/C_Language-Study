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

1) ǥ�� ����� �Լ�
- getchar() : �� ���ھ� �Է� ���� ��
- putchar() : �� ���ھ� ��� �� ��

// �и��� �� ���ھ� �Է��� �ޱ�������, �ӽ������ buffer �� ���� => ���� Ȥ�� �ܾ ����Ǿ��ٷ�
�Ǵ��� �� �ִ� ��ȣ�� ���� �ش� �ӽ�����ҿ� ����ǰ� �ִ� ��� ���ڿ��� �ӽ�����ҿ���
���ͼ� ����ϴ� �ý���!!!!

// ����ڿ��� ���� Ȥ�� ���ڸ� �Է¹����ð�, ���� ������ ��쿡�� * ó�� �� ���!

*/