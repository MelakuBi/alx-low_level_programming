#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: array of pointer
 * Return: 0
 */
	void print_chessboard(char (*a)[8])
{
	int b, c;

	for (c = 0; c <= 7; c++)
{
	for (b = 0; b <= 7; b++)
	{
	_putchar(a[c][b]);
	_putchar('\n');
	}
}
}
