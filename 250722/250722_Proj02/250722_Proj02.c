#include <stdio.h>

int main()
{
	//printf("1\n");
	//printf("2\n");
	//printf("3\n");


	int n = 1;

	//printf("%d\n", n);
	///*n = n + 1;*/
	//n += 1;

	//printf("%d\n", n);
	//n += 1;

	//printf("%d\n", n);
	//n += 1;

	// 기저조건 => 무한루프 실행되는 반복문을 특정 조건이 성립되면 멈출 수 있게 해주는 조건식
//label:
//	printf("%d\n", n);
//	n += 1;
//
//	if (n == 11) goto out;
//
//	goto label;
//
//out:

	while (n < 11)
	{
		printf("%d\n", n);
		n += 1;
	}

	return 0;
}