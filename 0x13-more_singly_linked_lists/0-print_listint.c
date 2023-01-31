#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that pront the elements of list
 * @h: pointer to the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
