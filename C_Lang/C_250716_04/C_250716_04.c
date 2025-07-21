#include <stdio.h>

int main()
{
	/*char c = "A";*/
	char d = 65;
	/*char e = "*";*/

	/*printf("%c %hhd\n", c, c);*/
	printf("%c %hhd\n", d, d);
	/*printf("%c %hhd\n", e, e);*/

	//char a = '\a'; // escape sequence

	//printf("%c", a);

	/*printf("\07");*/

	printf("\x7");
	printf("\x23");

	return 0;
}