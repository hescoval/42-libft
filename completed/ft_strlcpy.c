/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:29:27 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/05 18:29:28 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *sc, size_t size)
{
	size_t			i;
	unsigned char	*helper;

	if (size == 0)
		return (ft_strlen(sc));
	i = 0;
	helper = (unsigned char *)sc;
	while (i < size - 1 && helper[i])
	{
		dst[i] = helper[i];
		i ++;
	}
	dst[i] = '\0';
	return (ft_strlen(sc));
}
