#include "lists.h"
/**
 * insert_node - Insert number into sorted linked list
 * @head: Pointer to number of the list
 * @number: Number to insert
 * Return: Null if fail or pointer to new node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *newN;

	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = number;

	if (node == NULL || node->n >= number)
	{
		newN->next = node;
		*head = newn;
		return (newN);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	newN-<next = node->next;
	node-next = newN;

	return (newN)
}
