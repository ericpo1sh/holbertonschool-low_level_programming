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

	if (b)
	{
	slen = strlen(b);
		for (i = (slen - 1); i >= 0;)
		{
			for (j = 0; b[j]; j++, i--)
			{
				if (b[j] == '1')
				{
					sum += _pow(2, i);
				}
				if (b[j] == '0')
				{
					sum += 0;
				}
				if ((b[j] != '1') && (b[j] != '0'))
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
