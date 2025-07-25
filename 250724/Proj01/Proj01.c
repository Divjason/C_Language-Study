#include <stdio.h>

int main()
{
	//int i = 0;
	//while (i < 10)
	//// block = Compound Statments
	//// 실행문
	//// Flowcharts = 순서도
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

	// 실수자료형 + 정수자료형 => 정수자료형 값을 실수자료형 값 변환 (*자동)
	// 실수자료형이 정수자료형보다 랭킹이 높음!!!
	d = f + 1.234;
	f = f + 1.234f;

	// 플로트 자료형, 더블 자료형은 직접적인 연산 불가 -> 일시적으로 플로트 자료형을 더블자료형으로 변환시킨 후 연산

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