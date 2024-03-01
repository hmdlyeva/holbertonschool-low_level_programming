#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks uppercase
 * @c: variable
 * Return: if upper 1 otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);

	else

		return (0);
}
