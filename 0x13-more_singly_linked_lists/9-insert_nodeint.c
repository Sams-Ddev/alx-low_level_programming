#include "lists.h"
#include <stdlib.h>

/*
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list (where the new node is
 * added)
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	unsigned int i;
	listint_t *current;

	i = 0;
	current = *head;


	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	

	current = *head;
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current)
	{
		new_node->next = current->next;
		current->next = new_node;

		return (new_node);
	}

	return NULL;
}

