#include <unistd.h>
/**
 * _putchar - writec the character
 * @c: the charcter
 * Return: on success
 */
	int _putchar(char c)
{
	return(write(1, &c, 1));
}

