#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer points the header pointer
 * @str: the inpur string
 * Return: pointer that points to a new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h, *temp;
	unsigned int count;

	h = *head;
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	while (str[count] != '\0')
		count++;
	temp->len = count;
	temp->next = h;
	h = temp;
	return (h);
}
