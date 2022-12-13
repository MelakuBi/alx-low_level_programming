#include "main.h"
/**
 * print_alphabet - program starting
 * Return: Always success
 * Description: to be called by main file
 * print_alphabet: to print a toz
 */
	void print_alphabet(void)
{
	char abc;

	abc = 'a';
	do {
	_putchar(abc);
	abc++;
} while (abc <= 'z');
	_putchar('\n');
}
