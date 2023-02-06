#include "../include/push_swap.h"

void    swap_a(int stack_a[])
{
    int temp;

    if (len_a(stack_a) <= 1)
        return ; 
    temp = stack_a[1];
    stack_a[1] = stack_a[0];
    stack_a[0] = temp;
    ft_printf("sa\n");
}

void    push_a(int stack_a, int stack_b)
{
    ft_printf("pa\n");
}

void    rotate_a(argc, int stack_a, int stack_b)
{
    ft_printf("ra\n");
}

void    reverse_a(argc, int stack_a, int stack_b)
{
    ft_printf("rra\n");
}

int     len_a(int stack_a[])
{
    int len;
    
    len = 0;
    while(stack_a[len])
       len++;
    return (len); 
}