// ����ڷκ��� � �������� ��������. �׸��� �ش� ���ڰ� �Ҽ�����, �ƴ���
// �Ǵ� �� �Ҽ��̸�, �ش� ���ڴ� �Ҽ��Դϴ�. ���
// �Ҽ��� �ƴϸ�, �ش� ���ڴ� �Ҽ��� �ƴմϴ�. ���
// 1�� ���� �ڽ� �ܿ��� ���� �� ���� ���� �Ҽ�!!!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned num, div;
	bool isPrime; // flag => ��������, �ƴ����� �����ϴ� ���� ��� �÷���, ����

	scanf("%u", &num);

	/*
		����ó�� ����!
		=> ������ ���� ���!!!
	*/

	//for (div = 2; div < num; ++div)
	//{
	//	if (num % div == 0)
	//	{
	//		isPrime = false;
	//		printf("%u is divisible by %u.\n", num, div);
	//	}
	//}

	isPrime = true;

	for (div = 2; (div * div) <= num; ++div)
	{
		if (num % div == 0)
		{
			isPrime = false;

			if (num == div * div)
				printf("%u is divisible by %u.\n", num, div);
			else
				printf("%u is divisible by %u and %u.\n", num, div, num/div);
		}
	}

	if (isPrime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);

	return 0;
}