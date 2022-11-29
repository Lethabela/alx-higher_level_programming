#include "lists.h"
/**
 * chech_cycle -linked list contains a cycle.
 * @list: the pointer to the struct
 *
 * Return: If there is no cycle - 0.
 * If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (list == NULL)
	{
		return (0);
	}

	fast = fast->next;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		if (fast == slow)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
