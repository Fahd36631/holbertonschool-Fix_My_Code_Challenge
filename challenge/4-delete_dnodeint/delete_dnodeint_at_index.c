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
	dlistint_t *node, *new_head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	new_head = *head;
	i = 0;
	while (i < index)
	{
		if ((*head)->next == NULL)
		{
			*head = new_head;
			return (-1);
		}
		*head = (*head)->next;
		i++;
	}

	node = *head;

	if ((*head)->prev != NULL)
		(*head)->prev->next = (*head)->next;
	else
		new_head = (*head)->next;

	if ((*head)->next != NULL)
		(*head)->next->prev = (*head)->prev;

	free(node);
	*head = new_head;
	return (1);
}
