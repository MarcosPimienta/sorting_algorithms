#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int x = 0, y = 0, temp = 0, current = 0;
	int size_int = size;

	while(x < size_int - 1)
	{
		current = x;
		y = x + 1;
		while (y < size_int)
		{
			if (array[y] < array[current])
				current = y;
			y++;
		}
		if (current == x)
		{
			x++;
			continue;
		}
		temp = array[x];
		array[x] = array[current];
		array[current] = temp;
		print_array(array, size);
		x++;
	}
}
