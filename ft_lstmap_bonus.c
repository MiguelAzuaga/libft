/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:36:16 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/16 10:46:18 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_list(t_list *lst, void *content, void (*del)(void *))
{
	if (del && content)
		del(content);
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*dst;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	dst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_free_list(dst, content, del));
		tmp = ft_lstnew(content);
		if (!tmp)
			return (ft_free_list(dst, content, del));
		ft_lstadd_back(&dst, tmp);
		lst = lst->next;
	}
	return (dst);
}
