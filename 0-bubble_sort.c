#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 **/
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j = 0;

	if (size < 2)
		return;
	while (j < size - 1)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapping(array, i, i + 1);
				print_array(array, size);
			}
		}
		j++;
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
