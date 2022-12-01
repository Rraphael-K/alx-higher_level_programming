#include "lists.h"

/**
 * check_cycle - checks if singly linked list has a cycle
 * @list: list to check
 *
 * Return: 1 if true, 0 if no cycle
 */

int check_cycle(list_t *list)
{
	listint_t *up = list;
	linkint_t *down = list;

	if (!list)
		return (0);
	while (up && down && down->next)
	{
		up = up->next;
		down = down->next->next;

		if (up == down)
			return (1);
	}
	return (0);
}
