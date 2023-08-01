

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/*
 * size_t print_listint_safe(const listint_t *head) -
 * a function that prints a listint_t linked list.
 * This function can print lists with a loop
 *
 * Returns: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	const listint_t *current = head;
	
	while (current != NULL)
	{
		printf("[%p] %d\n",(void *) current, current->n);
		current = current->next;
		n++;
	}
	
	return n;
}
