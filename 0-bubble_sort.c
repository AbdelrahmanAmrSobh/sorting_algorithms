#include "sort.h"

/**
 * bubble_sort - takes an array and uses bubble sort on it
 * @array: The array to be sorted
 * @size: the size of the array
 * Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
    int number_of_swaps, tmp;
    size_t index;

    do {
        number_of_swaps = index = 0;
        while (index < size - 1)
        {
            if (array[index] > array[index + 1])
            {
                number_of_swaps++;
                tmp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = tmp;
                print_array(array, size);
            }
            index++;
        }
    } while (number_of_swaps);
}
