#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the
 * elements of a listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counts = 0;

	/*
	 * Loops through the list while the pointer is not NULL
	 * A for could me used toooooo
	 */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counts++;

		/* Moving the pointer to the next node */
		h = h->next;
	}

	return (counts);
}


