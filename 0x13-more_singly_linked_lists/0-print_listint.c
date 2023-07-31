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
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counts++;
		h = h->next;
	}

  return (counts);
}


