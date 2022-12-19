#include "main.h"
/**
 * print_rev - this prints string in reverse
 * @s: pointer to pass string value
 */
	void print_rev(char *s)
{
	char set;
	int i = 0;
	int len;
	int j = 0;

	while (s[i] != '\0')
	{
	i++;
	set = s[i];
	}
	for (len = i; len <= 0; len--)
{
	s[j] = set[len];
	j++;	
}
}

