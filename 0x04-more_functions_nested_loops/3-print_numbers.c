#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a newline
 * Return: void
 */

void print_numbers(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit);
}
_putchar('\n');
}

