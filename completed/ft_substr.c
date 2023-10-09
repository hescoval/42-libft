/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:53:54 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/05 16:54:10 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	size_t			copied;
	size_t			length;

	copied = 0;
	length = ft_strlen(s);
	if (start + len >= length)
		len = length - start;
	if (start >= length)
		ret = malloc(1);
	else
		ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	while (start < length && copied < len)
		ret[copied++] = s[start++];
	ret[copied] = '\0';
	return (ret);
}
