#include <stdlib.h>

/*
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *add_nodeint(listint_t **head, const int n) {
  listint_t *new_node = malloc(sizeof(listint_t));
  if (new_node == NULL) {
    return NULL;
  }

  new_node->data = n;
  new_node->next = *head;
  *head = new_node;

  return new_node;
}
