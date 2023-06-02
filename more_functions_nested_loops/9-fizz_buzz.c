#include <stdio.h>
/**
 * main - will count 1-100 and print fizzbuzz, fizz, buzz, when conditions meet
 * Return: i dont have one.
 * cnt is current number that will print
 */

int main(void)
{
	int cnt;

	cnt = 1;

	for (cnt == 1; cnt < 100; cnt++)
		{
		if ((cnt % 5 == 0) && (cnt % 3 == 0))
		{
			printf("FizzBuzz ");
			putchar(' ');
		}
		if (cnt % 5 == 0)
		{
			printf("Fizz ");
		}
		if (cnt % 3 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", cnt);
	}
}
