#include <stdio.h>
/**
 *main - program starts here
 *Description: this program description
 *putchar: to accept characters
 *Return: always return success
 */
int main(void)
{
	int putchar(int char);

	int a;

	for (a = 0; a < 10; a++)
{
	putchar(a);
	if (a < 9)
{
	putchar(',');
	putchar(" ");
}
}
	putchar("%d", "\n");
	return (0);
}

