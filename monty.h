
#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *_head_ptr;


FILE *checkFileData(char *argv[]);
void reading_file(FILE *file_p);
void strToken(char *str, int lineNumber, FILE *file_p);
void parseLine(char *token, int lineNumber, char *line, FILE *file_p);
void pushFunc(char *str, int num);

stack_t *_push(stack_t *stack, int value, int lineNumber);
void _pall(stack_t *_stack);
void _pint(stack_t *_stack, int line_number, char *line, FILE *file_p);
void _pop(stack_t **_stack, int line_number, char *line, FILE *file_p);
void _nop(stack_t **_stack, int line_number);
void _swap(stack_t **_stack, int line_number, char *line, FILE *file_p);
void _add(stack_t **stack, int line_number, char *line, FILE *file_p);

void free_stack(void);
void _exit_fail(char *line, FILE *file_p);

stack_t *_creat_List(stack_t *head, int data);
stack_t *_ins_Beg_List(stack_t *head, int data);
stack_t *_ins_End_List(stack_t *head, int data);

#endif
