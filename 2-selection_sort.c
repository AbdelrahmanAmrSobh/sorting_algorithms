#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * @array: targeted array
 * @size: the size of the array
 * Return: Nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_i;
	int min_n, tmp;

	for (i = 0; i < size; i++)
	{
		min_n = array[i];
		min_i = i;
		for (j = i; j < size; j++)
		{
			if (min_n > array[j])
			{
				min_n = array[j];
				min_i = j;
			}
		}
		if (i == min_i)
			continue;
		tmp = array[i];
		array[i] = array[min_i];
		array[min_i] = tmp;
		print_array(array, size);
	}
}
