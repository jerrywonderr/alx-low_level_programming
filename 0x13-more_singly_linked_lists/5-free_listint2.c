#include "lists.h"

/**
 * free_listint2 - frees a listint_t list from memory, sets the head to NULL
 *
 * @head: the first node in the list
 */
void free_listint2(listint_t *head)
{
	listint_t next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
