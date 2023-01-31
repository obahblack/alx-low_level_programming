#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adding an int node at the end
 * @head: first element
 * @n: int value
 * Return: the address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	temp = *head;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}

