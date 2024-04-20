#include "sort.h"
/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	int min, i = 0, j, n = size, tmp;

	for (; i < size ; i++)
	{
		min = i, j = 0;

		for (j = i + 1 ; j < size ; j++)
		{
			if (array[min] > array[j])
			min = j;
		}

		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
