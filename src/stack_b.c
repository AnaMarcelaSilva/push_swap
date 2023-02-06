#include "../include/push_swap.h"

void    swap_b(int stack_b)
{
    int temp;
    int len_b;
    
    len_b = 0;
    while(stack_b[len])
       len_b++;
    if (len <= 1)
        return ; 
    temp = stack_b[1];
    stack_b[1] = stack_b[0];
    stack_b[0] = temp;
    ft_printf("sb\n");
}

void    push_b(argc, int stack_b)
{

    ft_printf("pb\n");
}

void    rotate_b(argc, int stack_b)
{
    ft_printf("rb\n");
}

void    reverse_b(argc, int stack_b)
{
    ft_printf("rrb\n");
}