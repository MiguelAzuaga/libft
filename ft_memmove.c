/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 08:02:31 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/21 09:03:48 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		swap[n];
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	swap[n] = {0};
	ptr1 = (unsigned char *)dest;
	ptr2 = (const unsigned char *) src;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		swap[i] = ptr2[i];
		i++;
	}
	i--;
	while (i > 0)
	{
		ptr1[i] = swap[i];
		i--;
	}
	return (dest);
}
