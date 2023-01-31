#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numElement;

	numElement = 0;
	while (h != NULL)
	{
		numElement ++;
		h = h->next;
	}
	return (numElement);
}
