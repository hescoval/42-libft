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
#include <stdlib.h>

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
