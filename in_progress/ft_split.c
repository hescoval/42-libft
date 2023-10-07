#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void	fill_strings(char **strings, const char *s, char c)
{
	int	i;
	int k;
	int j;

	i = 0;
	j = 0;
	while(s[i])
	{
		k = 0;
		while(s[i] != c)
		{
			strings[j][k++] = s[i];
			i++;
			if(s[i] == '\0')
				break;
		}
		if(k != 0)
		{
			strings[j++][k] = '\0';
			continue;
		}
		i++;
	}
	strings[j] = NULL;
}
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
	size_t i;
	int j;
	int k;

	k = 0;
	i = 0;
	ret = malloc(sizeof(char*) * (check_splits(s, c)+1));
	if (ret == NULL)
		return (NULL);
	while(i < strlen(s))
	{
		j = 0;
		while(s[i++] != c)
			j++;
		if(j != 0)
		{
			ret[k++] = malloc(j + 1);
			continue;
		}
		i++;
	}
	fill_strings(ret, s, c);
	return (ret);
}

int main(void)
{
	char string[50] = "\n\n\n\ndata\ntest\nhm?\n";
	char **strings = ft_split(string, '\n');
	for(int i = 0; strings[i] != NULL; i++)
	{
		printf("%s\n", strings[i]);
	}
		printf("All strings printed");
}
