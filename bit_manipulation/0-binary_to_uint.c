#include "main.h"
/**
 * binary_to_uint - converts a number from binary to dec form
 * @b : the binary string
 * Return: 0 if NULL, sum if sucess.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	int slen = 0;
	unsigned int sum = 0;

	slen = strlen(b - 1);

	if (b != NULL)
	{
		for (i = slen; i >= 0; i--)
		{
			for (j = slen; j >= 0; j--)
			{
				if (b[j] == 1)
				{
					sum += _pow(2, i);
				}
				else if (b[j] == 0)
				{
					sum += 0;
				}
				else
					return (0);
			}
		}
	}
	else
		return (0);

return (sum);
}

/**
 * _pow - gives us solution of x^y
 * @x : our first int
 * @y : our second int
 * Return: -1 if y le 0, 1 if y is 0, result if y ge 0
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
	return (x * _pow(x, y - 1));
	}
	return (0);
}
