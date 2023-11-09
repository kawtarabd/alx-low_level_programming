#include "lists.h"

/**
 *print_dlistint - prints all the elements of a doubly-linked list.
 *@h: head of the list
 *
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_num++;
	}
	return (n_num);
}
