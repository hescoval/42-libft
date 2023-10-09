/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:12 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/05 14:32:14 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, nmemb * size);
	if (ret == NULL)
		return (NULL);
	return (ret);
}
/*
	An example of how using our own library becomes insanely useful,
	luckily i had already done bzero for this one.

	Can prevent overflow by doing a simple check with:

	(nmemb * size) / size == nmemb 

	If this doesnt prove true, the multiplication has overflowed and can return an error or NULL.
*/