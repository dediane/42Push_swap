#ifndef STACK_H
# define STACK_H

typedef struct s_unit
{
	int				data;
	struct s_unit	*next;
}				t_unit;

typedef struct s_stack
{
	struct s_unit	*head;
}				t_stack;

#endif