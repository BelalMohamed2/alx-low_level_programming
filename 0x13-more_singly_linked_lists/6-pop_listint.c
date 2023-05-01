#include "lists.h"
/**
 * pop_listint - function to pop the node ofthe head and return data
 * @head: a pointer points to a the header of the linked list
 * Return: returns the data of the node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
