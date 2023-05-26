#include "monty.h"
/**
 * f_pstr - function that prints the string starting at the top of the stack
 * @head: head of the stack
 * @counter: line number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *crt;
	(void)counter;

	crt = *head;
	while (crt)
	{
		if (crt->n > 127 || crt->n <= 0)
		{
			break;
		}
		printf("%c", crt->n);
		crt = crt->next;
	}
	printf("\n");
}
