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
	int b = 0;

	for (a = '0'; a <= '8'; a++)
{
	for (b; b <= '9'; ++b)
{
	if (b <= '9')
{
	putchar(a);
	putchar(b);
}
	if (b <= '9' && (a <= '7' && b <= '8'))
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
