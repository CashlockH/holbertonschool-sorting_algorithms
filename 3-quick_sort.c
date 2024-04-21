#include "sort.h"
#include <stdio.h>

/**
  * quick_sort - The quicksort algorithm
  * @array: The array to sort
  * @size: The size of array
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort_alg(array, 0, size - 1, size);
}

/**
  * sort_alg - Sorts recursively
  * @arr: The array
  * @left: The leftmost index
  * @right: The rightmost index
  * @size: The size of array
  */
void sort_alg(int *arr, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = split(arr, left, right, size);
		sort_alg(arr, left, pivot - 1, size);
		sort_alg(arr, pivot + 1, right, size);
	}
}

/**
  * split - Splits an array
  * @arr: The array
  * @left: The leftmost index
  * @right: The rightmost index
  * @size: The size of array
  * Return: The pivot index.
  */
int split(int *arr, int left, int right, size_t size)
{
	int i, i2, pivot, tmp;

	pivot = arr[right];
	i = left;

	for (i2 = left; i2 < right; i2++)
	{
		if (arr[i2] < pivot)
		{
			if (i != i2)
			{
				tmp = arr[i2];
				arr[i2] = arr[i];
				arr[i] = tmp;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[right])
	{
		tmp = arr[i];
		arr[i] = arr[right];
		arr[right] = tmp;
		print_array(arr, size);
	}

	return (i);
}
