#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees the list
 * @head: first element of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tempnode;

	while (head != NULL)
	{
		tempnode = head;
		head = head->next;
		free(tempnode->str);
		free(tempnode);
	}
}
