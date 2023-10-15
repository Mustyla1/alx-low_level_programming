#include "main.h"
/**
 *print_last_digit - this is the main function
 *@i: function parameter
 *Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		return (-k);
	else
		return (k);
	_putchar(k + '0');
}
