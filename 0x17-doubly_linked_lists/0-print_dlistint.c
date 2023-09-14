#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @hd: The head of the dlistint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *hd)
{
	size_t nodes = 0;

	while (hd)
	{
		nodes++;
		printf("%d\n", hd->n);
		hd = hd->next;
	}

	return (nodes);
}
