#include "lists.h"
#include <string.h>
/**
 * check_cycle - entrypoint
 * @list: pointer to list list_t
 * Return: linked list or cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	slow = list;
	fast = list;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
