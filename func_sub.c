#include "monty.h"
/**
  *f_sub- subtracts the top element of the stack
  *from the second top element of the stack
  *@head: head of the stack
  *@counter: line number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *result;
	int sub, nodes;

	result = *head;
	for (nodes = 0; result != NULL; nodes++)
		result = result->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = *head;
	sub = result->next->n - result->n;
	result->next->n = sub;
	*head = result->next;
	free(result);
}
