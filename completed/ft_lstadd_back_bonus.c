/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:07:21 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/09 15:07:22 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*helper;

	helper = *lst;
	if (helper == NULL)
	{
		*lst = new;
		return ;
	}
	while (helper->next != NULL)
	{
		helper = helper->next;
	}
	helper->next = new;
}
