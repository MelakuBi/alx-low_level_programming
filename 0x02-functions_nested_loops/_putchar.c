#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints alphabet
 * Return: alway success
 */
	int putchar(char c)
{
	return(write(1, &c, 1));
}
