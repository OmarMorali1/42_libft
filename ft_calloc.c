/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommorali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:51:36 by ommorali          #+#    #+#             */
/*   Updated: 2026/09/28 11:14:58 by ommorali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;
	size_t	res_size;

	res_size = n * size;
	if (n != 0 && res_size / n != size)
		return (NULL);
	res = malloc(res_size);
	if (!res)
		return (NULL);
	ft_bzero(res, res_size);
	return (res);
}
