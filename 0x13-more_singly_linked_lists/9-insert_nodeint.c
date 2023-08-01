#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list (where the new node is
 * added)
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current = head;
	
	sum = 0;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	
	return sum;
}
