#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	unsigned int idx;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	idx = 5;
	delete_dnodeint_at_index(&head, idx);
	print_dlistint(head);
	printf("-----------------\n");
	while (head != NULL)
	{
		delete_dnodeint_at_index(&head, 0);
		print_dlistint(head);
		printf("-----------------\n");
	}
	free_dlistint(head);
	return (EXIT_SUCCESS);
}
