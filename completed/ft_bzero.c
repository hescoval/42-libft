/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 07:55:03 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/04 12:31:46 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*helper;

	helper = (char *) s;
	while (n)
	{
		*helper = 0;
		helper++;
		n--;
	}
}
/*
int main(void)
{
	char testing[50] = "this is a test";
%.o: %.c
	ft_bzero(testing, 10);
	
	for(int i = 0; i < 20; i++)
	{
		printf("%c", testing[i]);
	}
}
*/
