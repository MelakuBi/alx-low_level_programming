#include "lists.h"
/**
 *print_listint - prints list of linkdlist and their number
 *@h : its a pointer point to head and traverse to next
 * Return: returns number of data
 */
	size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
