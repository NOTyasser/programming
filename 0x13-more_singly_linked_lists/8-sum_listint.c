#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all the data (n) of a listint_t linked list
 * @head: the head of the list
 * Return: if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
