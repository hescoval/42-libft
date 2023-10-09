/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:46:39 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/06 16:47:22 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_to_string(char *ptr, int n, int index, int size)
{
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ptr[index--] = n % 10 + 48;
		n /= 10;
	}
	ptr[size] = '\0';
}

static int	check_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		size ++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		size ++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		size;
	char	*int_min;
	char	*zero;

	zero = "0";
	int_min = "-2147483648";
	if (n == -2147483648 || n == 0)
	{
		if (n == -2147483648)
			ptr = ft_strdup(int_min);
		else
			ptr = ft_strdup(zero);
		return (ptr);
	}
	size = check_size(n);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	i = size - 1;
	write_to_string(ptr, n, i, size);
	return (ptr);
}
/*
	Also one of the function i couldnt get to during the piscine, and had
	to learn it during Common Core.
	
	Pretty happy with my itoa for the most part, i had to resort to using
	two separate rules for INT_MIN and 0 instead of just INT_MIN, but i
	think the logic is fairly simple and easy to understand.

	Check_size function to see how much space we need to malloc.

	Write_to_string that will simply write the number from back to front
	of the aforementioned string.
*/