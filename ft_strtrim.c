/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommorali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:40:39 by ommorali          #+#    #+#             */
/*   Updated: 2026/10/04 13:22:07 by ommorali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_is_in_set(*s1, set))
		s1++;
	if (!*s1)
	{
		res = ft_calloc(1, sizeof(char));
		return (res);
	}
	i = ft_strlen((char *)s1) - 1;
	while (i >= 0 && ft_is_in_set(s1[i], set))
		i--;
	res = (char *)malloc((i + 2) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, i + 2);
	return (res);
}
