// 콘솔창에서 3개의 행으로 각각 별이 출력되는 함수!!!
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

	draw(i); // 인수 | 인자값 = argument
	draw((int)c);
	draw((int)f);

	return 0;
}

void draw(int n) // 매개변수 = parameter
{
	while (n-- > 0)
		printf("*");
	printf("\n");
}