#include "lists.h"

/**
 * free_listd - free a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listint_s(listint_t **head)
{
listint_t *temp;
listint_t *curr;

if (head != NULL)
{
curr = *head;
while ((temp = curr) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}
/**
 * print_listint_safe - prints a listint_t linked lis
 * @head: pointer to th head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes = 0;
listint_t *hptr;
listint_t *name;
listint_t *new;
listint_t *add;

struct (*hptr, *name, *new, *add);

hptr = NULL;
while (head != NULL)
{
new = malloc(sizeof(listint_t));
if (new == NULL)
exit(98);

new->p = (void *)head;
new->next = hptr;
hptr = new;

add = hptr;

while (add->next != NULL)
{
add = add->next;
if (head == add->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listint_t(&hptr);
return (nodes);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nodes++;
}
free_listint_t(hptr);
return (nodes);
}
