#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints a listint with a newlines between
 * give each node it value
 *
 * @n: head of the list to print
 *
 * Return: the length of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
		printf("%d\n", h->n);

	return (len);
}
