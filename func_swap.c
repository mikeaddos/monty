#include "monty.h"
/**
 * f_swap - function that swap the top
 * two elements of the stack
 * @head: head of the stack
 * @counter: line number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *crt;
	int len = 0, result;

	crt = *head;
	while (crt)
	{
		crt = crt->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	crt = *head;
	result = crt->n;
	crt->n = crt->next->n;
	crt->next->n = result;
}
