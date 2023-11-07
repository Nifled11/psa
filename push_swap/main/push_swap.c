/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:05:00 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 14:45:19 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int content)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		ft_error_management(4);
	new->nbr = content;
	new->next = NULL;
	return (new);
}

void	ft_stack_addback(t_stack **stack, t_stack *new)
{
	t_stack	*temp;

	temp = *stack;
	if (*stack)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else
		*stack = new;
}

t_stack	*ft_check_arguments(int ac, char **av)
{
	t_stack	*a;
	int		x;
	int		temp;

	a = NULL;
	x = 1;
	temp = 0;
	while (x < ac)
	{
		temp = ft_atoinew(av[x]);
		ft_stack_addback(&a, ft_stacknew(temp));
		x++;
	}
	return (a);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		indexdouble;

	indexdouble = 0;
	a = NULL;
	b = NULL;
	if (ac >= 2)
		a = ft_check_arguments(ac, av);
	else
		ft_error_management(1);
	ft_duplicated(a);
	if (ft_checkorder(a) == 1)
	{
		ft_free_stack(a);
		return (0);
	}
	if (ac == 3)
		ft_sortwo(&a);
	if (ac == 4)
		ft_sortthree(&a, indexdouble);
	if (ac >= 5)
		ft_sortmore(&a, &b);
	ft_free_stack(a);
	return (0);
}
