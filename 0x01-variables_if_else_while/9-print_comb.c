#include <stdio.h>
/**
 *main - program starts here
 *Description: this program description
 *putchar: to accept characters
 *Return: always return success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
{
	putchar(a);
	while (a < 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
