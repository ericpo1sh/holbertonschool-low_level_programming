#include <stdio.h>
/**
 * main - number =0, while number <= 9,add to num print numbers and stop at 9.
 *
 * Return: Always 0.
 */
int main(void)
{
        int number;

        number = '0';

        while (number <= '9')
        {
                putchar(number);

                number++;
        }
putchar('\n');
return (0);
}
