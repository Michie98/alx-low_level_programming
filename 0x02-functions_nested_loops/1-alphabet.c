/*
* File: 1-alphabet.c
* Author: Michael Wagura
*/

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 * Return: Always 0 Success
 */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter == 'a' && letter == 'z')
_putchar(letter);
letter++;
}

_putchar('\n');
}

