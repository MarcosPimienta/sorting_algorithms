#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * quick_sort - Holberton useless sorting algorithm.
 * @array: array list
 * @size: array size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, size, 0, size - 1);
}
/**
 * parts - partition algorithm.
 * @array: array list
 * @size: array size
 * @low: integer
 * @high:integer
 * Return: int
 */
int parts(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int j;
	int tmp;

	for (j = low; j < high; j++)
	{
		if(array[j] <= pivot)
		{
			tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
			if (j != i)
				print_array(array, size);
			i++;
		}
	}
	tmp = array[j];
	array[j] = array[i];
	array[i] = tmp;
	if (j != i)
		print_array(array, size);
	return (i);
}
/**
 * quickSort - Own sorting algorithm.
 * @array: array list
 * @size: array size
 * @low: integer
 * @high:integer
 * Return: void
 */
void quickSort(int *array, size_t size, int low, int high)
{
	int pi = 0;

	if (low < high)
	{
		pi = parts(array, size, low, high);
		quickSort(array, size, low, pi - 1);
		quickSort(array, size, pi + 1, high);
	}
}
