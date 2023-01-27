#include "../include/push_swap.h"

int	ft_error(void)
{
    ft_printf("Error\n");
	return (-1);
}

int ft_args(int argc, char **args)
{
    int i;
    int j;

    if (argc <= 1) 
		return (ft_error());
    i = 1;
    while (args[i])
    {
        j = 0;
        while(args[i][j])
        {
            if (!check_index(args[i][0]) && !ft_isdigit(args[i][1]))
                return (ft_error());
            if (!check_value(args[i]))
                return (ft_error());
            j++;
        }   
        i++;
    }
    return (0);        
}

int check_value(char *arg)
{
    int i;

    i = 0;
    if (arg[i] == '-' || arg[i] == '+')
        i++;    
    while (arg[i])
    {   
        if (!ft_isdigit(arg[i]))
            return(0);
        i++;
    }
    return (1);
}

int check_index(char c)
{
    if (c == '-' || c == '+')
        return (0);
    return (1);
}
