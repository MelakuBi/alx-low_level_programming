#include <stdio.h>
/**
 *main - program starts here
 *Description: this program description
 *Return: always return success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
{
	putchar(a);
	if (a < 9)
{
	putchar(',');
	putchar("%d", " ");
}
}
	putchar("%d", "\n");
	return (0);
}

