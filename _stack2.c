#include "monty.h"

/**
 * _swap - Swaps the top two elements of the _stack.
 * @_stack: Pointer to a pointer pointing to top node of the _stack.
 * @line_number: Interger representing the line number of of the opcode.
 *@line: line
 *@file_p: file_p
 */
void _swap(stack_t **_stack, int line_number, char *line, FILE *file_p)
{
	stack_t *tmp;

	if (_stack == NULL || *_stack == NULL || (*_stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		_exit_fail(line, file_p);
	}
	tmp = (*_stack)->next;
	(*_stack)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *_stack;
	tmp->next = *_stack;
	(*_stack)->prev = tmp;
	tmp->prev = NULL;
	*_stack = tmp;
}

/**
 * _add - Adds the top two elements of the _stack.
 * @_stack: Pointer to a pointer pointing to top node of the _stack.
 * @line_number: Interger representing the line number of of the opcode.
 * @line: line
 * @file_p: file_p
 */
void _add(stack_t **_stack, int line_number, char *line, FILE *file_p)
{
	int addition;

	if (_stack == NULL || *_stack == NULL || (*_stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		_exit_fail(line, file_p);
	}
	(*_stack) = (*_stack)->next;
	addition = (*_stack)->n + (*_stack)->prev->n;
	(*_stack)->n = addition;
	free((*_stack)->prev);
	(*_stack)->prev = NULL;
}

/**
 * free_stack - Frees nodes in the _stack.
 */
void free_stack(void)
{
	stack_t *tmp;

	if (_head_ptr == NULL)
		return;

	while (_head_ptr != NULL)
	{
		tmp = _head_ptr;
		_head_ptr = _head_ptr->next;
		free(tmp);
	}
}
