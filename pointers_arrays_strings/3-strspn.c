#include "main.h"
#include <string.h>
/**
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int cnt = 0;

	for (; s[i] != '\0'; i++)
	{
		if (cnt != i)
			break;
			for (; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					cnt++;
				}
			}
	}
	return (cnt);
}
