#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: points the header of the linked list
 * Return: No returned value
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

	}
	*head = NULL;
}
