#include "lists.h"

/**
 * freee_listint2 - Frees the listint_t list and
 * sets the head to NULL
 *
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL || *head == NULL)
return;
while ((*head)->next != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
free(*head);
*head = NULL;
}
