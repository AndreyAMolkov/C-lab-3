#include<stdio.h>
#include<time.h>
#include "task6.h"
#define SIZE 20
#include<stdlib.h>
int main()
{
	int i ;
	int arr[SIZE+1] = { 0 };
	srand(time(0));
	//n = N;
	for (i = 0;i <= SIZE;i++)
	{
		switch (rand() % 2)
		{
		case 0:
			arr[i] = rand() % (1 - 9) + 1;
			break;
		case 1:
			arr[i] = -(rand() % (1 - 9) + 1);
			break;
		}
	}

	arr[SIZE] = '\0';

	printf("random entered array of numbers :\n");
	i = 0;
	while (i < SIZE)
	{
		printf(" %i", arr[i]);
		i++;
	}
	printf("\nSumma between the largest number and the smallerst number =%i\n", getSumMaxMin(arr,SIZE));
	return 0;
}
