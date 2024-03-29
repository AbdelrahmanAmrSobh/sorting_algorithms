#include "sort.h"
/**
 * shell_sort - sorting algorithm
 * @array: the array we want to sort
 * @size: the array legnth
 */

void shell_sort(int *array, size_t size)
{
	size_t h = 1, i = 0, temp, j = 0;

	while (h < size)
		h = 3 * h + 1;
	h = (h - 1) / 3;

	while (h)
	{
		i = 0;
		while ((i + h) < size)
		{
			while (array[i] > array[i + h])
			{
				temp = array[i];
				array[i] = array[i + h];
				array[i + h] = temp;
				j = i;
				while (i >= h && array[i] < array[i - h])
				{
					temp = array[i];
					array[i] = array[i - h];
					array[i - h] = temp;
					i = i - h;
				}
				i = j;
			}
			i++;
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
