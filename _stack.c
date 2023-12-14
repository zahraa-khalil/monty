#include "monty.h"

stack_t * _push(stack_t *_stack, int value, int lineNumber)
{
    if(lineNumber == 1)/*Empty_List*/
    {
        return (_creat_List(_stack, value));
    }
    else /*Non Empty List*/
    {
        return(_ins_Beg_List(_stack, value));
    }
}
void _pall(stack_t* _stack)
{
    while (_stack->next != NULL)
			{
				printf("%d\n",_stack->n);
				_stack = _stack->next;
			}
			printf("%d\n",_stack->n);
}
/*
void pushFunc(char *str, int num)
{
    printf("pushFunc %s\n", str);
    printf("pushFunc %d\n", num);
}
*/
