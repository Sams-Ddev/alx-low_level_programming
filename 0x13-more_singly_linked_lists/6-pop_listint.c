#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (*head == NULL)
		return (0);
	
	node = *head;
	n = node->n;
	*head = node->next;
	free(node);
	
	return (n);
}
