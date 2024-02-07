#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: pointer to the head of the list
 * @idx: index where the new node should be added, starting at 0.
 * @n: data for the new node.
 * Return: The address for the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *temp;
listint_t *temp_old;
listint_t *new_node;

temp = *head;
if (head == NULL)
return (NULL);
new_node = create_new_node(n);
if (new_node == NULL)
return (NULL);
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
if (idx == 0)
*head = new_node;
for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
temp = temp->next;
if (temp == NULL)
return (NULL);
if (idx == 0)
new_node->next = temp;
else
{
temp_old = temp->next;
temp->next = new_node;
new_node->next = temp_old;
}
return (new_node);
}
/**
 * create_new_node - creates a new node
 * @n: the data of the node
 * Return: pointer to the node
 */
listint_t *create_new_node(int n)
{
listint_t *new_node;

new_node = malloc((sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;

return (new_node);
}
