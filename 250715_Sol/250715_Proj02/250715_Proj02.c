#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	//int i = 0;
	//printf("%d", sizeof(i));

	/*unsigned int i = 0b11111111111111111111111111111111;*/
	/*unsigned int i = 1024;*/
	/*unsigned int u = UINT_MAX;*/

	//printf("%u\n", sizeof(unsigned int));
	//printf("%u", sizeof(i));

	/*printf("%d\n", i);
	printf("%u\n", u);*/

	unsigned int u_max = UINT_MAX;
	//unsigned int u_min = 0;

	//signed int i_max = INT_MAX;
	//signed int i_min = INT_MIN;
	char buffer[33];
	_itoa(u_max, buffer, 2);

	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);

	//printf("Min of UINT = %u\n", u_min);

	//printf("Max of INT = %d\n", i_max);
	//printf("Min of INT = %d\n", i_min);

	return 0;
}