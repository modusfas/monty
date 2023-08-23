#include "monty.h"

/**
 * pop - Removes top element of the stack
 * @stack: pointer to a pointer
 * @line_number: number
 *
 * Return: If the stack is empty, print the error message L<line_number>:
 * can't pop an empty stack,
 *followed by a new line, and exit with the status EXIT_FAILURE
 */
void pop(stack_t **stack, unsigned int line_number)
{

	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = (*stack)->next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(temp);
}
