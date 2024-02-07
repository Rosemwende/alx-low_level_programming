#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to the address of the head of the list
 * @n: integer to be added to the new node
 *
 * Return: Address of the element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listin_t *temp;

(void)temp;

new = (malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
temp = *head;
if (*head == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
}
temp = temp->next;
}
temp->next = new;
}
return (*head);
}

