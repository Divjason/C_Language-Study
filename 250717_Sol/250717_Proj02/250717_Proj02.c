// #define _CRT_SECURE_NO_WARNINGS
// CRT = C Runtime
// MSVC ���α׷� => �����Ϸ� => ��ŷ �� ���ȿ� ��� // 
// ��ü �Լ� 

#include <stdio.h>

int main()
{
	//int i = 0;
	//scanf("%d", &i);
	//printf("Value is %d\n", i);

	int i = 0, j = 0, sum = 0;

	printf("Input Two Integers : ");

	if (scanf("%d%d", &i, &j) != 2)
	{
		printf("Invalid Input!\n");
		return 1;
	};

	/*sum = i + j;*/

	printf("%d + %d = %d\n", i, j, i + j);

	return 0;
}