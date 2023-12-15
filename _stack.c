#include "monty.h"

/**
 *_push - function that _push
 *@_stack: head ptr
 *@value: data
 *@lineNumber: lineNumber
 *Return: head
 */
stack_t *_push(stack_t *_stack, int value, int lineNumber)
{
	if (lineNumber == 1) /*Empty_List*/
	{
		return (_creat_List(_stack, value));
	}
	else /*Non Empty List*/
	{
		return (_ins_Beg_List(_stack, value));
	}
}

/**
 *_pall - function that _push
 *@_stack: head ptr
 *Return: void
 */
void _pall(stack_t *_stack)
{
	stack_t *_pall_ptr = _stack;

	if (_pall_ptr == NULL)
		return;
	while (_pall_ptr->next != NULL)
	{
		printf("%d\n", _pall_ptr->n);
		_pall_ptr = _pall_ptr->next;
	}
	printf("%d\n", _pall_ptr->n);
}

/**
 *_pint - function that _pint
 *@_stack: head ptr
 *@line_number: line_number
 *@line: line
 *@file_p: file_p
 *Return: void
 */
void _pint(stack_t *_stack, int line_number, char *line, FILE *file_p)
{
	if (_stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		_exit_fail(line, file_p);
	}
	printf("%d\n", _stack->n);
}

/**
 *_pop - function that _pop
 *@_stack: head ptr
 *@line_number: line_number
 *@line: line
 *@file_p: file_p
 *Return: void
 */
void _pop(stack_t **_stack, int line_number, char *line, FILE *file_p)
{
	stack_t *tmp;

	if (_stack == NULL || *_stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		_exit_fail(line, file_p);
	}
	tmp = *_stack;
	*_stack = tmp->next;
	if (*_stack != NULL)
		(*_stack)->prev = NULL;
	free(tmp);
}



/**
 * free_stack - Frees nodes in the stack.
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
