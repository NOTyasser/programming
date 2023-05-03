#include "lists.h"
#include <stdlib.h>

/**
 * reverse_recur - function that reverses a listint_t linked list
 *
 * @first line: the node to reverse
 * @second line: node after node to reverse
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_recur(listint_t *first, listint_t *second)
{
	listint_t *ptr, *prev = NULL;

	ptr = first;
	while (ptr->next != second)
	{
		pev = ptr;
		ptr = ptr->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = ptr->next;
	if (first != ptr && second != first)
		second = reverse_recur(second, first);
	ptr->next = second;
	return (ptr);
}

/**
 * reverse_listint - reverse a listint list
 *
 * @head: the list to reverse
 *
 * Return: new head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_recur(*head, NULL);
	return (*head);
}
