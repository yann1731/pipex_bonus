/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:17:57 by yst-laur          #+#    #+#             */
/*   Updated: 2022/04/13 11:18:00 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	total_str_len(char *s1, char *s2)
{
	int	total_len;

	total_len = 0;
	total_len += ft_strlen(s1);
	total_len += ft_strlen(s2);
	return (total_len);
}

char	*ft_strjoinfree(char *s1, char *s2)
{
	char		*ns;

	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	ns = malloc((total_str_len(s1, s2) + 1) * sizeof(char));
	if (ns == NULL)
		return (NULL);
	ft_strlcpy(ns, s1, total_str_len(s1, s2) + 1);
	ft_strlcat(ns, s2, total_str_len(s1, s2) + 1);
	free(s1);
	return (ns);
}
