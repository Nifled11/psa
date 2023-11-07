/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:14:46 by pquintan          #+#    #+#             */
/*   Updated: 2023/08/29 12:55:42 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*start;
	t_list	*temp;

	start = *lst;
	temp = NULL;
	if (lst)
	{
		while (start)
		{
			temp = start;
			start = start->next;
			del(temp->content);
			free(temp);
		}
	}
	*lst = 0;
}
