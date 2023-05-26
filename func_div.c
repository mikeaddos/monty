#include "monty.h"
/**
 * f_div - function that divides the
 * top two elements of the stack
 * @head: head of the stack
 * @counter: line number
 * Return: no return
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	crt = *head;
	if (crt->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = crt->next->n / crt->n;
	crt->next->n = result;
	*head = crt->next;
	free(crt);
}
