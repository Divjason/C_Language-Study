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
		
	// �� 5ȸ�� ���ļ� ���� ���� ������ ���� ��������!
	// �� 5ȸ���� ���� �ްԵǸ� �ش� 5���� ������ �հ踦 �ֿܼ� ����ϰ�
	// ���α׷��� �������ּ���~!!

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