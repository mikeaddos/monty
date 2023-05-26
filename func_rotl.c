#include "monty.h"
/**
  *f_rotl- function that rotates the stack to the top
  *@head: head of the stack
  *@counter: line number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *result;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	result = (*head)->next;
	result->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = result;
}
