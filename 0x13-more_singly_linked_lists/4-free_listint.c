#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: is a pointer to the start of the linked list
 * Return: no returned value
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
