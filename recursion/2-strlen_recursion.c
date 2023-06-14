#include "main.h"
/**
 * _strlen_recursion - prints out the strlen of s
 * @s : the string to be counted
 * Return: Recursivly return 1 + func, 0 when done.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	return (0);
}
