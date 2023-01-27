#include "lists.h"

/**
 * add_nodeint - function with two arguments
 * @head: double pointer to linked list
 * Description: adds a new node at the beginning of linked list
 * Return: address of new element or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	*str = temp->str;
	temp->next = *head;
	*head = temp;
	return (temp);
}
