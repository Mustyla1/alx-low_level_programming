#include "lists.h"

/**
 * sum_dlistint -  Entry point (sum_dlistint)
 * @head: pointer to the head of the list
 * Return: 0 or Sum
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp = NULL;
int sum = 0;

temp = head;
if (temp == NULL)
return (0);
while (temp != NULL)
{
sum = sum + temp->n;
temp = temp->next;
}

return (sum);
}
