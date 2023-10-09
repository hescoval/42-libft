/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 08:27:37 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/05 13:54:54 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*helperdest;
	unsigned char	*helpersrc;

	i = 0;
	helperdest = (unsigned char *)dest;
	helpersrc = (unsigned char *)src;
	if (helperdest == NULL && helpersrc == NULL)
		return (NULL);
	if (dest > src)
	{
		while (i < n)
		{
			*(helperdest + n - 1) = *(helpersrc + n - 1);
			n --;
		}
		return (dest);
	}
	while (i < n)
	{
		helperdest[i] = helpersrc[i];
		i ++;
	}
	return (dest);
}

/*
	Very good function to learn, helps understand the memory part of programming
	a tiny bit better, we were forced to not use a temporary array which the 
	MAN indicates is a viable way to solve the overlap issue, so the mental exercise of
	visualizing the memory being printed back to front and front to back
	is very interesting.
*/