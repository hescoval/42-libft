/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:35:10 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/06 19:35:11 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	end_loop(char const *s1, char const *set, int *rem_E)
{
	int	i;
	int	j;
	int	found;

	found = 1;
	i = ft_strlen(s1) - 1;
	while (found == 1)
	{
		found = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				*rem_E += 1;
				found = 1;
				break ;
			}
			j ++;
		}
		i --;
	}
}

void	start_loop(char const *s1, char const *set, int *rem_S)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	found = 1;
	while (found == 1)
	{
		found = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				*rem_S += 1;
				found = 1;
				break ;
			}
			j ++;
		}
		i ++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		removals[3];
	int		i;
	int		max;
	char	*ret;
	int		j;

	j = 0;
	removals[0] = 0;
	removals[1] = 0;
	start_loop(s1, set, &removals[0]);
	end_loop(s1, set, &removals[1]);
	removals[2] = ft_strlen(s1) - removals[0] - removals[1];
	if (removals[2] < 0)
		removals[2] = 0;
	ret = malloc(removals[2] + 1);
	if (ret == NULL)
		return (NULL);
	i = removals[0];
	max = ft_strlen(s1) - removals[1];
	while (i < max)
	{
		ret[j++] = s1[i++];
	}
	ret[j] = '\0';
	return (ret);
}
/*
	My logic was to loop through the string from both ends separately, to give me the starting
	and ending point for my final string, but you can achieve this with strchr and strrchr.

	All the code in this project will remain unchanged, and its just a reminder of my 
	learning journey.
*/