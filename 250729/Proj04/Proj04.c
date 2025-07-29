#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

main() 
{
	//int i1 = 0;
	//int i2 = 1;
	//int i3 = 2;
	//// ...

	//printf("%d\n", i1);
	//printf("%d\n", i2);
	//printf("%d\n", i3);
	//// ...

	//int my_arr[SIZE];

	//for (int i = 0; i < SIZE; ++i) 
	//	my_arr[i] = i * i;
	//

	//for (int i = 0; i < SIZE; ++i) 
	//	printf("%d ", my_arr[i]);

	//for (int i = 0; i < SIZE; ++i) {
	//	my_arr[i] = i * i;
	//	printf("%d ", my_arr[i]);
	//}
		
	// 총 5회에 걸쳐서 각각 정수 형태의 값을 받으세요!
	// 총 5회까지 값을 받게되면 해당 5개의 정수의 합계를 콘솔에 출력하고
	// 프로그램을 종료해주세요~!!

	int numbers[SIZE];
	int sum = 0;
	int i;

	printf("Enter %d numbers : \n", SIZE);

	for (i = 0; i < SIZE; ++i) 
		scanf("%d", &numbers[i]);
	
	for (i = 0; i < SIZE; ++i)
		sum += numbers[i];

	printf("Sum = %d\n", sum);
	return 0;
}