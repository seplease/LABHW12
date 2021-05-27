#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, score[20] = { 0 }, i;

	printf("Enter the number of scores(<= 20):");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score[i]);
	}

	for (i = 0; i < num; i++)
	{
		printf("Student %2d: ", i);
		for (int j = 1; j <= score[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}