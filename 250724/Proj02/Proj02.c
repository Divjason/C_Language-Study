// �ܼ�â���� 3���� ������ ���� ���� ��µǴ� �Լ�!!!
// 
// *****
// ***********************************
// *******

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n);

int main()
{
	int i = 5;
	char c = '#'; // 35
	float f = 7.1f;

	draw(i); // �μ� | ���ڰ� = argument
	draw((int)c);
	draw((int)f);

	return 0;
}

void draw(int n) // �Ű����� = parameter
{
	while (n-- > 0)
		printf("*");
	printf("\n");
}