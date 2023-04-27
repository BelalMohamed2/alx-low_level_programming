#include "lists.h"
/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 * @head: a pointer to the header
 * @str: the input data string
 * Return: the address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	while (str[count] != '\0')
		count++;
	new->len = count;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
