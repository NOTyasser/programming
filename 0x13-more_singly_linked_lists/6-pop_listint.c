#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - returns value of head node and removes it
 * @head: head of the list
 * Return: the head node’s data
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
