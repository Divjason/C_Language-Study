#include <stdio.h>

int main()
{
	//printf("1\n");
	//printf("2\n");
	//printf("3\n");


	int n = 1;

	//printf("%d\n", n);
	///*n = n + 1;*/
	//n += 1;

	//printf("%d\n", n);
	//n += 1;

	//printf("%d\n", n);
	//n += 1;

	// �������� => ���ѷ��� ����Ǵ� �ݺ����� Ư�� ������ �����Ǹ� ���� �� �ְ� ���ִ� ���ǽ�
//label:
//	printf("%d\n", n);
//	n += 1;
//
//	if (n == 11) goto out;
//
//	goto label;
//
//out:

	while (n < 11)
	{
		printf("%d\n", n);
		n += 1;
	}

	return 0;
}