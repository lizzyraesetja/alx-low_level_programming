#include "lists.h"

/**
 * print_listint - function with one argument
 * @h: pointer to struct
 *
 * Description: prints all the elements of a list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->st);
		h = h->next;
		count++;

	}
	return (count);
}
