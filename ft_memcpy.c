/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:32:42 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/09 11:26:18 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
