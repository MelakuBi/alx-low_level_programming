#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint - a function that frees a listint_t list.
 * @head: struct
 * Return: free
 */
	void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	return;
	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
