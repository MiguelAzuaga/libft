/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:34:22 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/09 12:01:47 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*s;
	unsigned char		*d;

	if (dest > src)
	{
		i = 0;
		d = dest;
		s = src;
		while (i < n)
		{
			d[n - 1 - i] = s[n - 1 - i];
			i++;
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}
