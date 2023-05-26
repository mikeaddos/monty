#include "monty.h"
/**
  *f_rotr- function that rotates the stack to the bottom
  *@head: head of the stack
  *@counter: line number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *result;

	result = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (result->next)
	{
		result = result->next;
	}
	result->next = *head;
	result->prev->next = NULL;
	result->prev = NULL;
	(*head)->prev = result;
	(*head) = result;
}
