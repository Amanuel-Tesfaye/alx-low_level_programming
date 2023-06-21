#include <stdio.h>
/**
 * put the character C to stdio
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
