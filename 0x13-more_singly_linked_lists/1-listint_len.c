#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns the length of a linked list
 *
 * @n: list to get length of
 *
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
		;

	return (len);
}
