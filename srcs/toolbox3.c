/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolbox3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:19:00 by shamzaou          #+#    #+#             */
/*   Updated: 2023/04/12 22:44:24 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void    is_stack_sorted(t_stack *stack)
{
    t_stack *current;

    current = stack;
    while (current)
    {
        if (current->data > current->next->data)
            return;
        current = current->next;
    }
    exit(1);
}