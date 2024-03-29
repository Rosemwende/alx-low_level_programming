#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * of the listint_t list
 * @head: pointer to the head of the list
 * Return: sum of all the data, or
 * 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
	return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
