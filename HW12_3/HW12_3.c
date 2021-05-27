#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int income[8], best = 0, total = 0, bestIndex = 0, i;
	double average;

	for (i = 1; i <= 7; i++)
	{
		printf("Enter the income: ");
		scanf("%d", &income[i]);
	}

	for (i = 1; i <= 7; i++)
	{
		if (income[i] > best)
		{
			best = income[i];
			bestIndex = i;
		}
	}
	printf("-----------------------------------\n");
	printf("The best income is %d in day %d\n", best, bestIndex);
	printf("-----------------------------------\n");
	
	for (i = 1; i <= 7; i++)
	{
		total += income[i];
	}

	average = (double)total / 7;

	printf("The total is %d\n", total);
	printf("The average is %.1f\n", average);

	printf("The good days and their incomes are\n");
	for (i = 1; i <= 7; i++)
	{
		if (income[i] > average)
		{
			printf("day %d: %d\n", i, income[i]);
		}
	}

	return 0;
}