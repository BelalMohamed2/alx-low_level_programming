#include "lists.h"
/**
 * delete_nodeint_at_index -  function deletes the node at index of listint_t
 * @head: a pointer points the linked list
 * @index: the index of the deleted node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *freeptr, *temp = *head;
	unsigned int node;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
	}
	freeptr = temp->next;
	temp->next = freeptr->next;
	free(freeptr);
	return (1);
}
