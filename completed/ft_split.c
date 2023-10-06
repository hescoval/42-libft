#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	check_splits(char const *s, char c)
{
	int	splits;
	int	i;

	i = 0;
	splits = 0;

	while (s[i])
	{
		if (s[i] == c && i != 0)
		{
			while (s[i] == c)
			{
				i++;
			}
			splits ++;
			continue;
		}
		i++;
	}
	return (splits);
}
char	**ft_split(char const *s, char c)
{
	char **ret;
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	ret = malloc(sizeof(char*) * (check_splits(s, c)+1));
	if (ret == NULL)
		return (NULL);
	while(i < ft_strlen(s))
	{
		j = 0;
		while(s[i] != c)
		{
			j++;
		}
		if(j != 0)
		{
			ret[k] = malloc(j + 1);
		}
	}
	return (ret);
}

int main(void)
{
	char string[50] = "CACACACCCCC";
	char **strings = ft_split(string, 'C');
}