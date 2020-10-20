#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int x = 0, y = 0, temp = 0;

	while(array[x] != '\0')
	{
		if (x == size - 1)
			break;
		y = x + 1;
		while (y < size)
		{
			if (array[x] > array[y])
			{
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
			y++;
		}
		x++;
	}
}
