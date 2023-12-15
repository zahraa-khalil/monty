#include "monty.h"

/**
 *_creat_List - function that _creat_List.
 *@head: head ptr
 *@data: data
 *Return: head
 */
stack_t *_creat_List(stack_t *head, int data) /*Add To Empty*/
{
	stack_t *temp_ptr = malloc(sizeof(stack_t));

	temp_ptr->prev = NULL;
	temp_ptr->n = data;
	temp_ptr->next = NULL;
	head = temp_ptr;
	return (head);
}

/**
 *_ins_Beg_List - function that _ins_Beg_List.
 *@head: head ptr
 *@data: data
 *Return: head
 */
stack_t *_ins_Beg_List(stack_t *head, int data) /*Add To Beginning*/
{
	stack_t *temp_ptr = malloc(sizeof(stack_t));

	temp_ptr->prev = NULL;
	temp_ptr->n = data;
	temp_ptr->next = head;
	head->prev = temp_ptr;
	head = temp_ptr;
	return (head);
}

/**
 *_ins_End_List - function that _ins_Beg_List.
 *@head: head ptr
 *@data: data
 *Return: head
 */
stack_t *_ins_End_List(stack_t *head, int data) /*Add To Beginning*/
{
	stack_t *temp_ptr, *loop_ptr;

	temp_ptr = malloc(sizeof(stack_t));
	temp_ptr->prev = NULL;
	temp_ptr->n = data;
	temp_ptr->next = NULL;
	loop_ptr = head;
	while (loop_ptr->next != NULL)
	{
		loop_ptr = loop_ptr->next;
	}
	loop_ptr->next = temp_ptr;
	temp_ptr->prev = loop_ptr;
	return (head);
}

/**
 *_exit_fail - function that _exit_fail.
 *@line: line
 *Return: void
 */
void _exit_fail(char *line)
{
	if (file_p != NULL)
		fclose(file_p);
	free(line);
	free_stack();
	exit(EXIT_FAILURE);
}
