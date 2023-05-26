#include "monty.h"
/**
 * f_pall - function that prints the stack
 * @head: head of the stack
 * @counter: line number (unused)
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *crt;
	(void)counter;

	crt = *head;
	if (crt == NULL)
		return;
	while (crt)
	{
		printf("%d\n", crt->n);
		crt = crt->next;
	}
}
