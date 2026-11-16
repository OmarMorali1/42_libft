/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommorali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:28:04 by ommorali          #+#    #+#             */
/*   Updated: 2026/10/04 12:28:09 by ommorali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	builder_and_maker(t_list *lst, t_list **st,
		void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	void	*content;

	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (!temp)
		{
			del(content);
			return (0);
		}
		(*st)->next = temp;
		*st = temp;
		lst = lst->next;
	}
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*curr;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	start = ft_lstnew(content);
	if (!start)
	{
		del(content);
		return (NULL);
	}
	curr = start;
	if (!builder_and_maker(lst->next, &curr, f, del))
	{
		ft_lstclear(&start, del);
		return (NULL);
	}
	return (start);
}
