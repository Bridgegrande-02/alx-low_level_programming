#include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: tested character
 * Return:  if it is, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
