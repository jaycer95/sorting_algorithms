#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 * @Return: void
 **/
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	bool condition;

	while(condition == true)
	{
		condition = false;
		for (i = 0; i < size - 1; i++)
		{
			if ( array[i] > array[i + 1])
			{
				swapping(array, i);
				print_array(array, size);
				condition = true;
			}
			/*print_array(array, size);*/
		}
	}
}
/**
 *
 *
 *
 *
 *
 **/
void swapping(int *array, int i)
{
	int c;

	c = array[i];
	array[i] = array[i + 1];
	array[i + 1] = c;
}
