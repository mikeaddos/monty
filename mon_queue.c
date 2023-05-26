#include "monty.h"
/**
 * f_queue - function that prints the top
 * @head: head of the stack
 * @counter: line number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds node to the tail of the stack
 * @n: new value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *result;

	result = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (result)
	{
		while (result->next)
			result = result->next;
	}
	if (!result)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		result->next = new_node;
		new_node->prev = result;
	}
}
