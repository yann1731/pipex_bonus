/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:20:24 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:20:27 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

static int	total_str_len(char *s1, char *s2)
{
	int	total_len;

	total_len = 0;
	total_len += ft_strlen(s1);
	total_len += ft_strlen(s2);
	return (total_len);
}

static char	*re_alloc(int c, size_t len, char *tofree)
{
	char			*rstr;
	size_t			cd;
	unsigned char	cout;
	unsigned char	*ptr;

	rstr = malloc(2 * sizeof(char));
	ptr = (unsigned char *) rstr;
	cout = (unsigned char) c;
	cd = 0;
	while (cd < len)
	{
		*ptr = cout;
		ptr++;
		cd++;
	}
	free(tofree);
	return (rstr);
}

static char	*strjoinfree(char *s1, char *s2)
{
	char		*ns;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ns = malloc((total_str_len(s1, s2) + 1) * sizeof(char));
	if (ns == NULL)
		return (NULL);
	ft_strlcpy(ns, s1, total_str_len(s1, s2) + 1);
	ft_strlcat(ns, s2, total_str_len(s1, s2) + 1);
	free(s1);
	return (ns);
}

char	*gnl(void)
{
	char	*str;
	char	*buf;

	buf = malloc(2 * sizeof(char));
	str = malloc(2 * sizeof(char));
	str = re_alloc('\0', 2, str);
	buf = re_alloc('\0', 2, buf);
	while (buf[0] != '\n')
	{
		read(STDIN_FILENO, buf, 1);
		str = strjoinfree(str, buf);
	}
	free(buf);
	return (str);
}
