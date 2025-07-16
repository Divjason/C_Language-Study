#include <stdio.h>

int main()
{
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000U;

	long l = 65537L;
	long long ll = 1234567890842LL;

	printf("char = %hhd, %hhd, %c", c, c, c);

	return 0;
}