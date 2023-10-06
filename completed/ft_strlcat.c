/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:00:20 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/05 19:00:20 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	while (src[i] && (dest_size + i < size - 1) && size != 0)
	{
		dst[dest_size + i] = src[i];
		i ++;
	}
	if (dest_size > size)
		return (src_size + size);
	else
	{
		dst[dest_size + i] = '\0';
		return (src_size + dest_size);
	}
}
