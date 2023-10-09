/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:13:19 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/09 15:13:32 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nxt;

	current = (*lst);
	while (current)
	{
		nxt = current->next;
		(*del)(current->content);
		free(current);
		current = nxt;
	}
	*lst = NULL;
}
