/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 04:50:35 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/03 04:52:41 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*helper;

	helper = (char *) s;
	while (n)
	{
		*helper = c;
		n--;
		helper++;
	}
	return (s);
}
