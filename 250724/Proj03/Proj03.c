#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, sum = 0;
	//int status;

	printf("Enter an Integer (q to quit) : ");
	/*status = scanf("%d", &num);*/

	while (scanf("%d", &num) == 1)
	{
		sum += num;

		printf("Enter an Integer (q to quit) : ");
		/*status = scanf("%d", &num);*/
	}

	printf("sum = %d\n", sum);

	return 0;
}

// 1) ����ڷκ��� ���ڸ� ��������.
// 2) ����ڰ� ���ڸ� �Է��Ѵٸ�, ���ڸ� ����մϴ�.
// 3) ����ڰ� ���ڰ� �ƴ� ���ĺ� q�� �Է��Ѵٸ�, �� �̻� ���ڸ� ���� �ʽ��ϴ�.
// 4) q�� �Է��� ���� �׵��� ����ڰ� �Է��ߴ� ��� ���ڵ��� ���� ����մϴ�.
// 5) �׸��� �ܼ�â�� �����մϴ�.

// flow chart
// Pseudocode -> ���� �ڵ� �ۼ� ��, ���� �ڵ� �۵� ���μ����� ����� ���� ������ �ۼ�