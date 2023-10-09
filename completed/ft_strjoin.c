/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:44:37 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/06 15:44:37 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	copied;
	size_t	i;

	i = 0;
	copied = 0;
	final = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (final == NULL)
		return (NULL);
	while (s1[i])
	{
		final[copied++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		final[copied++] = s2[i++];
	}
	final[copied] = '\0';
	return (final);
}
