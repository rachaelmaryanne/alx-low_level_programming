#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head node
 * @index: index node
 * Return: address of index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *go;
	unsigned int i;

	go = head;
	i = 0;

	while (i != index)
	{
		if (go->next == NULL)
			return (NULL);
		go = go->next;
		i++;
	}
	return (go);
}
