#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; i < idx - 1 && current; i++)
	{
		current = current->next;
	}

	if (!current)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = current;
	new->next = current->next;
	if (current->next)
	{
		current->next->prev = new;
	}
	current->next = new;

	return (new);
}
