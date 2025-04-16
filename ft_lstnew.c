/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:15:04 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/16 11:19:14 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ans;

	ans = malloc(sizeof(t_list));
	if (!ans)
		return (NULL);
	ans->content = content;
	ans->next = NULL;
	return (ans);
}
