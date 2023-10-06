/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 01:59:23 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/03 02:13:14 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*helper;
	int		i;

	helper = (char *) s;
	i = ft_strlen(s);
	helper += i;
	while (i >= 0)
	{
		if (*helper == (char)c)
			return (helper);
		helper--;
		i--;
	}
	return (NULL);
}
