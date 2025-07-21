#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int a = 0;
	//unsigned int int_size1 = sizeof a;
	//unsigned int int_size2 = sizeof(int);
	//unsigned int int_size3 = sizeof(a);

	//size_t int_size4 = sizeof(a); // size_t = unsigned int
	//size_t float_size = sizeof(float);

	//printf("Size of Int type is %u bytes.\n", int_size1);
	//printf("Size of Int type is %u bytes.\n", int_size2);
	//printf("Size of Int type is %u bytes.\n", int_size3);
	//printf("Size of Int type is %zu bytes.\n", int_size4);
	//printf("Size of Int type is %zu bytes.\n", float_size);

	//int int_arr[30];
	//
	//printf("Size of array = %zu byets\n", sizeof(int_arr));

	/*char c = 'a';
	char string[10];

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char type is %zu bytes.\n", char_size);
	printf("Size of string type is %zu bytes.\n", str_size);*/

	//int a = 1;
	//int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);
	//printf("%i\n", int_arr[100]);

	/*char c = 'a';
	char str1[10] = "Hello";
	char str2[10] = { 'H', 'i' };

	printf("%c\n", c);
	printf("%s", str1);
	printf("%s\n", str2);

	printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);*/

	/*char str3[10] = "Hello, World";*/
	char str3[20] = "Hello, \0World"; // \0 => Null Character
	printf("%s\n", str3);
	printf("%c\n", str3[10]);
	printf("%c\n", str3[11]);

	return 0;
}