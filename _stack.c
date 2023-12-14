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
	if (_stack == NULL)
		return;
	while (_stack->next != NULL)
	{
		printf("%d\n", _stack->n);
		_stack = _stack->next;
	}
	printf("%d\n", _stack->n);
	free_stack();
}

/**
 *_pint - function that _pint
 *@_stack: head ptr
 *@line_number: line_number
 *Return: void
 */
void _pint(stack_t *_stack, int line_number)
{
	if (_stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", _stack->n);
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
