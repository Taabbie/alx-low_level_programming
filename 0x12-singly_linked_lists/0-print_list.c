#include "list.h"

/**
 * print_list - prints all the elements in a list_t list
 * @h: the list_t list
 *
 * Return: the numb of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
