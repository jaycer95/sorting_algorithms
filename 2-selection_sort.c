#include "sort.h"
/**
 * selection_sort - selction sort algorithm
 * @array: array
 * @size: size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;

	if (size < 2)
		return;
	for (j = 0; j < size - 1; j++)
	{
		min_idx = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}
		if (j != min_idx)
		{
			swapping(array, j, min_idx);
			print_array(array, size);
		}
	}
}
/**
 * swapping - swaps integers
 * @array: array
 * @i: int
 * @j: int
 * Return: void
 **/
void swapping(int *array, int i, int j)
{
int c;

c = array[i];
array[i] = array[j];
array[j] = c;
}
