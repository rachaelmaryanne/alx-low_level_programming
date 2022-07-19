#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: head of the list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;
	while (*head)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = 0;
}
