// 1������ ���� �� ������ 3% ���ڰ� �ٴ´ٴ� ����, 10������ �ɶ����� ���� �ð��� �ɸ���?
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double seed_money, target_money, annual_interest;

	printf("Input Seed Money : ");
	scanf("%lf", &seed_money);

	printf("Input Target Money : ");
	scanf("%lf", &target_money);

	printf("Input Annual Interest : ");
	scanf("%lf", &annual_interest);

	double fund = seed_money;
	int year_count = 0;

	while (fund < target_money)
	{
		fund = fund + fund * annual_interest / 100.0;
		year_count = year_count + 1;

		printf("Year %d, Fund %f\n", year_count, fund);
	}

	printf("It takes %d years\n", year_count);

	return 0;
}