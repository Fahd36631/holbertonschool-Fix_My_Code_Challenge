#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: pointer to head pointer
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	i = 0;
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	if (node == NULL)
		return (-1);

	if (node->prev != NULL)
		node->prev->next = node->next;
	else
		*head = node->next;

	if (node->next != NULL)
		node->next->prev = node->prev;

	free(node);
	return (1);
}
