#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i;
	current = *head;
	
	i = 0;
	
	temp = current->next;
        
	current->next = temp->next;	
	current = *head;
	if (!*head)
	{
		return (-1);
	}
	
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = temp->next;
		free(temp);
		
		return (1);
	}
	

	while (current && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (!current)
	{
		return (-1);
	}


	free(temp);
	
	return (1);
}
