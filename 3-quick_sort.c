#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * swap - swap without losing data.
 * @a: integer
 * @b: integer
 * Return: void
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
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
int i = (low - 1);
int j = low;

while (j <= high - 1)
{
	if (array[j] < pivot)
	{
		i++;
		swap(&array[i], &array[j]);
	}
	j++;
}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
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
