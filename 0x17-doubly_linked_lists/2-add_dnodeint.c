#include "lists.h"

/**
 *add_dnodeint - add a node at the beginning
 *@head: calculate the head of the list
 *@n: data of the node
 *Return: a pointer to the new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	if (*head)
		(*head)->prev = tmp;
	*head = tmp;
	return (tmp);
}
