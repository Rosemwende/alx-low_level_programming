#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of a list
 * @head: pointer to the address of the head
 * @n: integer to be added to the new node
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
if (*head == NULL)
new_node->next = NULL;
else
new_node->next = *head;
new_node->n = n;
*head = new_node;

return (*head);
}
