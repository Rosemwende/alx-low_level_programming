#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: int
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);
n = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return (n);
}
