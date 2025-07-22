// 1만원을 저금 후 복리로 3% 이자가 붙는다는 전제, 10만원이 될때까지 얼마의 시간이 걸릴까?
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