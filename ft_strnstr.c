/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:16:16 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/16 10:56:20 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	if (*little == 0)
		return ((char *)big);
	i = 0;
	l_len = ft_strlen(little);
	if (len == 0)
		return (0);
	while (big[i] && i + l_len <= len)
	{
		if (big[i] == *little && ft_strncmp(&big[i], little, l_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
