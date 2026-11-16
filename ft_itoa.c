/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommorali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:54:22 by ommorali          #+#    #+#             */
/*   Updated: 2026/09/28 11:15:13 by ommorali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(long n)
{
	size_t	res;

	res = 0;
	while (n)
	{
		n /= 10;
		res ++;
	}
	return (res);
}

static char	*itoa_core(long n, char *res, int len)
{
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	while (n)
	{
		res[-- len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	size_t	len;

	num = n;
	len = intlen(num);
	if (num <= 0)
		len ++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		res[0] = '-';
	}
	res = itoa_core(num, res, len);
	return (res);
}
