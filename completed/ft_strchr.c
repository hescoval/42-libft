/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:04:47 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/03 02:09:00 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*helper;
	size_t		i;

	helper = (char *)s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return (helper);
		helper++;
		i++;
	}
	return (NULL);
}
