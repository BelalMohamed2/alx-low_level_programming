#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: the pointer to the head of the linked list
 * @idx: the index of the new add node
 * @n: the data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		temp = new;
		return (new);
	}

	while ((idx - 1) > 0)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
		idx--;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
