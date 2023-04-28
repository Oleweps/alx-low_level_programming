#include "lists.h"

/**
  *add_nodeint - adds a new node at the beginning of a linked list
  *@head: pointer to the first node in the list
  *@n: data to insert into that new node
  *Description: *add_nodeint allocates a new node and initializes its data
  *field to @n. It then inserts the node at the beginning of the linked list
  *pointed to by @head. If @head is NULL or memory allocation fails, the
  *function returns NULL.
  *Return pointer to the new node, or NULL if it fails
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
