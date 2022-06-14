#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integer
 * @a: 1 valor
 * @b: 2 valor
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
