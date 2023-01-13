#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current; i++)
	{
		current = current->next;
	}

	if (!current || !current->next)
	{
		return (-1);
	}

	current->next = current->next->next;
	if (current->next)
	{
		current->next->prev = current;
	}
	free(current->next);

	return (1);
}
