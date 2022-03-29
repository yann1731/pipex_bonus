#include "pipex_bonus.h"

static char	**memerr(char **str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		free(str[index]);
		index++;
	}
	free(str);
	return (NULL);
}

static int	wordcount(const char *s, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			count++;
			trigger = 1;
		}
		if (*s == c && trigger == 1)
			trigger = 0;
		s++;
	}
	return (count);
}

static int	nextword(const char *s, char c, int *i)
{
	int	count;
	int	index;

	count = 0;
	index = *i;
	while (s[index] == c)
		index++;
	while (s[index])
	{
		if (s[index] != c)
		{
			count++;
			index++;
		}
		if (s[index] == c)
		{
			*i = index;
			return ((count + 1));
		}
	}
	*i = index;
	return (count + 1);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		wc;
	int		index;
	int		i;
	int		size;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	wc = wordcount(s, c);
	str = malloc((wc + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (i < wc)
	{
		size = nextword(s, c, &index);
		str[i] = substr(s, (index - (size - 1)), (size - 1));
		if (str[i] == NULL)
			return (memerr(str));
		i++;
	}
	str[i] = NULL;
	return (str);
}