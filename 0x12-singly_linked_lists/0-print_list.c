#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: is a header to the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (1)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		count++;
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	return (count);
}
