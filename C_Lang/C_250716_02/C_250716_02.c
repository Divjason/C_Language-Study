#include <stdio.h>

int main()
{
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111; // 0b -> 2���� ǥ��
	unsigned int oct = 037777777777; // 0 -> 8���� ǥ��
	unsigned int hex = 0xffffffff; // 0x -> 16���� ǥ��


	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);

	return 0;
}