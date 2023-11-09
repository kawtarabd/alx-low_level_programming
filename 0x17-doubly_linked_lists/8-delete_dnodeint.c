#include "lists.h"

/**
 *delete_dnodeint_at_index - delete at a giving index
 *@head: pointer to the head
 *@index: index
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crnt, *pre_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	crnt = *head;
	pre_node = NULL;
	while (crnt != NULL)
	{
		if (i == index)
		{
			if (pre_node == NULL)
				*head = crnt->next;
				else
				pre_node->next = crnt->next;
			if (crnt->next != NULL)
				crnt->next->prev = pre_node;
			free(crnt);
		return (1);
		}
		pre_node = crnt;
		crnt = crnt->next;
		i++;
	}
	return (-1);
}
