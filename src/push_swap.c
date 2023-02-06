/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:50:32 by amarcela          #+#    #+#             */
/*   Updated: 2023/01/30 10:58:29 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int	stack_a[argc];
	int	stack_b[argc];
	int	i;
	int	j;

  	if (ft_args(argc, argv) == -1)
	  return (-1);
	i = 0;
	j = 0;
	while (argv[++i])
	{
	  stack_a[j] = ft_atoi(argv[i]);
	  j++;
	}
	return (0);
}
