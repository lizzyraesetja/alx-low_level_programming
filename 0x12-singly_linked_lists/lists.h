#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void free_list_t2(list_t **head);
int pop_list_t(list_t **head);
list_t *get_nodeint_at_index(list_t *head, unsigned int index);
int sum_list_t(list_t *head);
list_t *insert_nodeint_at_index(list_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(list_t **head, unsigned int index);
list_t *reverse_list_t(list_t **head);
int _putchar(char c);
list_t *add_nodeint(list_t **head, const int n);
#endif
