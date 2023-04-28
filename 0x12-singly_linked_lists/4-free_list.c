#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: the start of the list
 * Return: no return vlaue
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
