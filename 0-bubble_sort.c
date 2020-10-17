#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int x = 0, y = 0, j;
	int temp = 0;

	for (j = 0; j < size; j++)
	{
		x = 0;
		for (; array[x] != '\0' ; x++)
		{
			y = x + 1;
			temp = array[x];
			if (x == size - 1)
			{
				y = 0;
				break;
			}
			if (array[x] > array[y])
			{
				array[x] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
	}
}
