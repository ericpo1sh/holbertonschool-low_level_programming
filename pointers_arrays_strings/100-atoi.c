#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _atoi - converts a string to an integer.
 * @s : the string to be converted into a int
 * Return: The result
 */
int _atoi(char *s)
{
  int sign = 1;
  int result = 0;
  int num_neg_signs = 0;

  if (*s == '-')
  {
    sign = -1;
    num_neg_signs++;
    s++;
  } else if (*s == '+') {
    s++;
  }

  while (*s >= '0' && *s <= '9')
  {
    result = result * 10 + (*s - '0');
    s++;
  }

  return result * sign;
}
