#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - returns the value of head node and deletes it,
 * 0 otherwise
 *
 * @head: head of list
 *
 * Return: value of node, or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (0);

	h = (*head)->n;
	next = (*head)->nezt;
	free(*head);
	*head = next;
	return (n);
}
