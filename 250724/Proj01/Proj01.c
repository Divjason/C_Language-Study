#include <stdio.h>

int main()
{
	//int i = 0;
	//while (i < 10)
	//// block = Compound Statments
	//// ���๮
	//// Flowcharts = ������
	//{
	//	i++;
	//	printf("%d\n", i);
	//}

	/* promotion assignment */

	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;

	/* demotion assignment */
	d = 1.25;
	f = 1.25;
	f = 1.123f;

	/* ranking of types in operation */
	// long double > double > float
	// unsigned long long > long
	// unsigned, int
	// short int, unsigned short int
	// signed char, char, unsigned char
	// _Bool

	// �Ǽ��ڷ��� + �����ڷ��� => �����ڷ��� ���� �Ǽ��ڷ��� �� ��ȯ (*�ڵ�)
	// �Ǽ��ڷ����� �����ڷ������� ��ŷ�� ����!!!
	d = f + 1.234;
	f = f + 1.234f;

	// �÷�Ʈ �ڷ���, ���� �ڷ����� �������� ���� �Ұ� -> �Ͻ������� �÷�Ʈ �ڷ����� �����ڷ������� ��ȯ��Ų �� ����

	d = (double)3.14f;
	/*i = 1.6 + 1.7;*/
	i = (int)1.6 + (int)1.7;

	char c;

	f = i = c = 'A';
	printf("%c %d %f\n", c, i, f);
	c = c + 2;
	i = f + 2;
	printf("%c %d %f\n", c, i, f);
	c = 1106; // 1106 = 0b10001010010, 0b01010010 => R
	printf("%c\n", c);
	c = 83.99;
	printf("%c\n", c);

	return 0;
}