/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:27:04 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/03 04:43:16 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*helpers1;
	unsigned char	*helpers2;

	helpers1 = (unsigned char *) s1;
	helpers2 = (unsigned char *) s2;
	while (n)
	{
		if (*helpers1 != *helpers2)
			return (*helpers1 - *helpers2);
		helpers1 ++;
		helpers2 ++;
		n--;
	}
	return (0);
}
