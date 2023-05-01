#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: the header pointer
 * @index: the index of the needed node
 * Return: return of list pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	while (index > 0)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
		index--;
	}
	return (temp);
}
