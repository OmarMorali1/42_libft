/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommorali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:29:14 by ommorali          #+#    #+#             */
/*   Updated: 2026/10/04 12:29:17 by ommorali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_ln;
	size_t	src_ln;
	size_t	i;

	src_ln = ft_strlen((char *)src);
	dst_ln = 0;
	while (dst[dst_ln] && dst_ln < dstsize)
		dst_ln ++;
	if (dstsize <= dst_ln)
		return (dstsize + src_ln);
	i = 0;
	while (i < src_ln && i + dst_ln < dstsize - 1)
	{
		dst[dst_ln + i] = src[i];
		i ++;
	}
	dst[i + dst_ln] = 0;
	return (dst_ln + src_ln);
}
