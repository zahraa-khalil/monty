#include "monty.h"

stack_t *_creat_List(stack_t *head, int data) /*Add To Empty*/
{
	stack_t *temp_ptr = malloc(sizeof(stack_t));
	temp_ptr->prev = NULL;
	temp_ptr->n = data;
	temp_ptr->next = NULL;
	head = temp_ptr;
	return head;
}

stack_t *_ins_Beg_List(stack_t *head, int data) /*Add To Beginning*/
{
	stack_t *temp_ptr = malloc(sizeof(stack_t));
	temp_ptr->prev = NULL;
	temp_ptr->n = data;
	temp_ptr->next = head;
	head->prev = temp_ptr;
	head = temp_ptr;
	return head;
}


stack_t* _ins_End_List(stack_t* head, int data) /*Add To Beginning*/
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
	return head;
}