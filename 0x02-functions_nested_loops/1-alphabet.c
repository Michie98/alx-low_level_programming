/*
* File: 1-alphabet.c
* Author: Michael Wagura
*/

#include "main.h"

/**
* print_alphabet - prints alphabet in lower case
*
* Return: void.
*/
void print_alphabet(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
