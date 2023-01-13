#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer value of the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
