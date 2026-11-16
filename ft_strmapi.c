/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommorali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:37:55 by ommorali          #+#    #+#             */
/*   Updated: 2026/09/28 11:37:58 by ommorali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*res;

	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len ++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	len = 0;
	while (s[len])
	{
		res[len] = f((unsigned int)len, s[len]);
		len ++;
	}
	res[len] = '\0';
	return (res);
}
