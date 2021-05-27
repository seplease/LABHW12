#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int scores[40];
	int total = 0, i, average, num;

	printf("Enter the number of scores(0 < number <= 40): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &scores[i]);
	}
	printf("--------------------------------\n");

	for (i = 0; i < num; i++)
		total += scores[i];
	average = total / num;

	printf("Total: %d\n", total);
	printf("Average: %d\n", average);

	for (i = 0; i < num; i++)
		printf("%d ", scores[i]);

	return 0;
}