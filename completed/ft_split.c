/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:01:19 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/07 16:01:20 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_ret(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
		free(ret[i++]);
	free(ret);
}

static void	fill_strings(char **strings, const char *s, char c)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] != c && s[i])
		{
			strings[j][k] = s[i];
			k++;
			i++;
		}
		if (k != 0)
		{
			strings[j][k] = '\0';
			j++;
			continue ;
		}
		i++;
	}
	strings[j] = NULL;
}

static int	check_splits(char const *s, char c)
{
	int	splits;
	int	i;

	i = 0;
	splits = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			splits++;
			continue ;
		}
		i++;
	}
	return (splits);
}

static void	make_strings(char **ret, const char *s, char c)
{
	size_t	i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] != c && s[i])
		{
			j++;
			i++;
		}
		if (j > 0)
		{
			ret[k] = malloc(j + 1);
			if (ret[k] == NULL)
				return ;
			k++;
			continue ;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;

	i = 0;
	ret = (char **) malloc(sizeof(char *) * (check_splits(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	make_strings(ret, s, c);
	while (i < check_splits(s, c))
	{
		if (ret[i] == NULL)
		{
			free_ret(ret);
			return (NULL);
		}
		i++;
	}
	fill_strings(ret, s, c);
	return (ret);
}
