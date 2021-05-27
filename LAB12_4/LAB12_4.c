#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int data[20], num, i;

	printf("Enter a number:");
	scanf("%d", &num);

	for (i = 0; i < 20; i++)
		data[i] = num * (i + 1);

	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0 && i != 0)
			printf("\n");
		printf("%5d ", data[i]);
	}

	return 0;
}