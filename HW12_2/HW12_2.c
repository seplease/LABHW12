#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	int i, data[100], total = 0;
	double average = 0.0;

	printf("Enter the number of random numbers:(<= 100): ");
	scanf("%d", &num);

	srand((int)time(NULL));
	for (i = 0; i < num; i++)
		data[i] = rand() % 100;

	for (i = 0; i < num; i++)
		total += data[i];
	average = total / num;
	printf("난수의 평균은 %.1f\n", average);

	printf("발생된 난수는\n");
	for (i = 0; i < num; i++)
	{
		if (i % 5 == 0 && i != 0)
			printf("\n");
		printf("%5d ", data[i]);
	}

	return 0;
}