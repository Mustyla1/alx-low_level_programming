#include "main.h"

/**
 * swap_int - we are swaping the values
 * @a: fuction parameter
 * @b: function parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
