#include <stdio.h>

void say_hello(void); // prototyping, function declation

int main(void)
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	z = x + y;

	/*함수 호출부*/
	say_hello();

	return 0;
}

/* function definition */
void say_hello(void)
{
	int x = 1;
	x = 10;

	printf("Hello, World\n");

	return;
}