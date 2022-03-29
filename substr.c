#include "pipex_bonus.h"

static int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	cd;

	cd = 0;
	if (dstsize == 0)
	{
		while (src[cd])
			cd++;
		return (cd);
	}
	cd = 0;
	while (cd < dstsize - 1 && src[cd])
	{
		dst[cd] = src[cd];
		cd++;
	}
	if (dstsize != 0)
		dst[cd] = '\0';
	cd = 0;
	while (src[cd])
		cd++;
	return (cd);
}

static char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (j < i)
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*substr(const char *s, unsigned int start, int len)
{
	int		i;
	char	*rs;

	i = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int) ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	while (i < len && s[i])
		i++;
	rs = malloc((i + 1) * sizeof(char));
	if (rs == NULL)
		return (NULL);
	ft_strlcpy(rs, s + start, len + 1);
	return (rs);
}