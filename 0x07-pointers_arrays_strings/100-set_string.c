#include "main.h"
#include <stdio.h>

/**
*  set_string - sets the value of a pointer to a char
*  @s: char arg
*  @to: char arg
*  Return: Nothing
*/

void set_string(char **s, char *to)
{
	*s = to;
}
