#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the ponter to a pointer
 * @to: the string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
