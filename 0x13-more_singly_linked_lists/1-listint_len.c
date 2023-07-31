#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */

typedef struct listint_s
{
	int n;

	struct listint_s *next;
} listint_t;

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node = h;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
  
	return count;
}

int main(void) {
  listint_t *head = NULL;
  size_t len;

  /* Create a linked list */
  head = malloc(sizeof(listint_t));
  head->n = 1;
  head->next = malloc(sizeof(listint_t));
  head->next->n = 2;
  head->next->next = malloc(sizeof(listint_t));
  head->next->next->n = 3;
  head->next->next->next = NULL;

  /* Calculate the length of the linked list */
  len = listint_len(head);

  /* Print the length of the linked list */
  printf("The length of the linked list is: %zu\n", len);

  return 0;
}

