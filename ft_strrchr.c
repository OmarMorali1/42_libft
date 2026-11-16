/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommorali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:40:17 by ommorali          #+#    #+#             */
/*   Updated: 2026/09/28 11:40:20 by ommorali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*last;

	last = 0;
	p = (char *)s;
	while (1)
	{
		if (*p == (char)c)
			last = p;
		if (*p == '\0')
			break ;
		p++;
	}
	return (last);
}
