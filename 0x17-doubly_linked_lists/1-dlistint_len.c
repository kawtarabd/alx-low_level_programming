#include "lists.h"

/**
 *dlistint_len - calculate the length of a lists
 *@h: head of the list
 *Return: the number of elements in a dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elmnt_num = 0;

	while (h)
	{
		elmnt_num++;
		h = h->next;
	}
	return (elmnt_num);
}
