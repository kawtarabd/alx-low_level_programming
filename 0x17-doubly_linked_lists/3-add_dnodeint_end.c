#include "lists.h"

/**
 *add_dnodeint_end - adds a nod at the end
 *@head: head of the list
 *@n: data
 *Return: a pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *end;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->next = NULL;
	tmp->n = n;
	if (!*head)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (*head);
	}
	end = *head;
	while (end->next)
		end = end->next;
	end->next = tmp;
	tmp->prev = end;
	return (*head);
}
