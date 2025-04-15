/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:15:04 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/15 10:28:24 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ans;
	ans = malloc(sizeof(t_list));
	ans->content = content;
	return (ans);
}
/* 
#include <stdio.h>
int	main(void)
{
	t_list	**my_list;
	t_list	*node1;

	my_list = &node1;
	int		num = 42;
	node1 = ft_lstnew(&num);
	printf("%d\n", *(int *)node1->content);
}
 */
