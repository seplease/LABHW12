#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int income[7], best = 0, i;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income: ");
		scanf("%d", &income[i]);
	}

	for (i = 1; i <= 7; i++)
	{
		if (income[i] > best)
			best = income[i];
	}
	printf("-------------------------\n");
	printf("The best income is %d\n", best);
	printf("Incomes are\n");
	for (i = 0; i < 7; i++)
		printf("%d ", income[i]);
	
	return 0;
}