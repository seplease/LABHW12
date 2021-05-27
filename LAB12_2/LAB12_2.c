#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, data[10], total = 0;
	double average = 0.0;

	srand((int)time(NULL));
	for (i = 0; i < 10; i++)
		data[i] = rand() % 100;

	for (i = 0; i < 10; i++)
		total += data[i];
	average = total / 10.0;
	printf("Æò±ÕÀº %.1f\n", average);

	for (i = 0; i < 10; i++) 
		printf("%d ", data[i]);

	return 0;
}