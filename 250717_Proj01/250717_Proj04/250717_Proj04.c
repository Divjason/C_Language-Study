#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("%u\n", sizeof(_Bool)); // 1 byte = 8bits

	_Bool b1;

	b1 = 0; // falsy => false
	b1 = 1; // truthy => true

	printf("%d\n", b1);

	bool b2, b3;

	b2 = true;
	b3 = false;

	printf("%d %d\n", b2, b3);

	return 0;
}