#include "lists.h"

/**
 * get_nodeint_at_index - return the node of a
 * listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0.
 * Return: pointer to the retrieved node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;

for (a = 0; a < index; a++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
