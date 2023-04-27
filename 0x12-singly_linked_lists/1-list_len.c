#include "lists.h"
/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: is the header to the first element
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
