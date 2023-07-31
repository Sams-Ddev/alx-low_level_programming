#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *current;

    /* Create the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        /* If the list is empty, make the new node the head */
        *head = new_node;
    }
    else
    {
        /* Find the last node and append the new node to it */
        current = *head;
        while (current->next != NULL)
            current = current->next;

        current->next = new_node;
    }

    return (new_node);
}

