/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:49:42 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/14 17:29:16 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*dst;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dst = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[i - s1_len])
	{
		dst[i] = s2[i - s1_len];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
