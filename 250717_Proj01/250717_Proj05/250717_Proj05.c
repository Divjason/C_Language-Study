#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char fruit_name;

	printf("What is your favorite fruits?\n");

	scanf("%c", &fruit_name);

	printf("You like %c\n", fruit_name);

	return 0;
}