#include "sort.h"
/**
 * bubble_sort - sorts array of integers in ascending order using Bubble sort
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int swapped = 1, i = 1, temp, n = size;

	while (swapped && size != 1)
	{
		swapped = 0, i = 0;
		for (; i < n ; i++)
		{
			if (array[i] < array[i - 1])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		n = n - 1;
	}
}
