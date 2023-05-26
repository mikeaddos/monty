#include "monty.h"
/**
* free_stack - fumction that frees a doubly linked list
* @head: head of the stack
* Return: no return
*/
void free_stack(stack_t *head)
{
	stack_t *result;

	result = head;
	while (head)
	{
		result = head->next;
		free(head);
		head = result;
	}
}
