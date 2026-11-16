/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommorali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:37:11 by ommorali          #+#    #+#             */
/*   Updated: 2026/10/04 12:29:27 by ommorali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*p;
	size_t	srcsize;

	i = 0;
	p = (char *)src;
	srcsize = ft_strlen((char *)src);
	if (!dstsize)
		return (srcsize);
	while (i < dstsize - 1 && *p)
	{
		*dst = *p;
		p ++;
		dst ++;
		i ++;
	}
	*dst = 0;
	return (srcsize);
}
