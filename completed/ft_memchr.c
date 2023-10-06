/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:38:10 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/05 17:38:11 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	search;
	unsigned char	*helper;

	helper = (unsigned char *) s;
	search = (unsigned char) c;
	while (n)
	{
		if (*helper == search)
			return (helper);
		n --;
		helper ++;
	}
	return (NULL);
}
