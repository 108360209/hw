#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10] ;
	printf("優化版泡沫排序法\n");
	printf("請輸入十個數字:");
	for (int i = 0; i <= 9; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 8; i >= 0; i--)
	{
		int b = 0;
		for (int j = 0; j <=i; j++)
		{
			if (a[j] >= a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
			else
			{
				b = b + 1;
			}
		}
		if (b == i + 1)
		{
			goto c;
		}
		printf("Step %2d :{", 9 - i);

		for (int i = 0; i < 10; i++)
		{
			printf("%d", a[i]);
			if (i < 9)
			{
				printf(",");
			}
		}
		printf("}\n");
	}
	c:
	system("pause");
	return 0;
}