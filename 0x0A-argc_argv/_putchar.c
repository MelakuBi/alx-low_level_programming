#include <unistd.h>
/**
 * _putchar - prints character
 * @c: variable
 * Return: on success 0
 */
	int _putchar(char, c)
{
	return(write(1, &c, 1));
}
