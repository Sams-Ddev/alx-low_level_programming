#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t free_listint_safe(listint_t **head)
{
	size_t n = 0;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;
		free(current);
		current = next;
		n++;
	}
	
	*head = NULL;
	
	return (n);
}

