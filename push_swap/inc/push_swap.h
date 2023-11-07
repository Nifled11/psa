/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:05:38 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 14:46:44 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../libft/ft_printf.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				price;
	bool			upper_half;
	bool			cheapest;
	struct s_stack	*target;
	struct s_stack	*next;
}	t_stack;

int			ft_error_management(int a);
t_stack		*ft_check_arguments(int ac, char **av);
int			ft_atoinew(char *str);
void		ft_stack_addback(t_stack **stack, t_stack *new);
t_stack		*ft_stacknew(int content);
void		ft_duplicated(t_stack *a);
void		ft_sortthree(t_stack **a, int index);
void		ft_sa(t_stack *a, int index);
void		ft_sb(t_stack *b, int index);
void		ft_ss(t_stack *a, t_stack *b, int index);
void		ft_pa(t_stack **a, t_stack **b, int index);
void		ft_pb(t_stack **b, t_stack **a, int index);
void		ft_ra(t_stack **a, int index);
void		ft_rb(t_stack **b, int index);
void		ft_rr(t_stack **a, t_stack **b, int index);
void		ft_rra(t_stack **a, int index);
void		ft_rrb(t_stack **b, int index);
void		ft_rrr(t_stack **a, t_stack **b, int index);
int			ft_checkorder(t_stack *a);
void		ft_sortwo(t_stack **a);
void		ft_sortmore(t_stack **a, t_stack **b);
int			ft_checkmax(t_stack *a);
int			ft_checkmin(t_stack *a);
void		ft_nodes_on(t_stack *a, t_stack *b);
void		ft_indexandhalf(t_stack *x);
void		ft_set_target_a_to_b(t_stack *a, t_stack *b);
t_stack		*ft_max_stack(t_stack *x);
void		ft_set_prices(t_stack *a, t_stack *b);
void		ft_cheapest(t_stack *x);
void		ft_movecheap(t_stack **a, t_stack **b);
t_stack		*ft_return_cheapest(t_stack *x);
void		ft_top_rotate(t_stack **a, t_stack **b, t_stack *cheap);
void		ft_rotate_stack(t_stack **x, t_stack *cheap, char stack);
void		ft_nodes_litte(t_stack *a, t_stack *b);
void		ft_set_target_b_to_a(t_stack *a, t_stack *b);
t_stack		*ft_min_stack(t_stack *x);
void		ft_movecheap_little(t_stack **a, t_stack **b);
void		ft_free_stack(t_stack *x);

int			ft_white_space(char *str);
int			ft_sign(char *str, int x);
int			ft_foward_zero(char *str, int x);
int			ft_smallestop(t_stack *a);
int			ft_countargstack(t_stack *a);

#endif