#include "monty.h"
/**
 * f_pchar - function that prints the char
 * at the top of the stack
 * @head: head of the stack
 * @counter: line number
 * Return: no return
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *crt;

	crt = *head;
	if (!crt)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (crt->n > 127 || crt->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", crt->n);
}
