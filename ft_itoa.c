/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:19:39 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/11 14:08:59 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putnbr(char *s, int n, int size)
{
	int	i;
	
	s[size] = '\0';
	if (n == -2147483648)
	{
		ft_strlcpy(s, "-2147483648", 12);
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	i = size - 1;	
	while (n > 0)
	{
		s[i] = n % 10;
		n /= 10;
		i--;
	}
	return (s);
	
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		n_len;
	int		val;

	val = n;
	n_len = 0;
	if (val <= 0)
		n_len++;
	while (val != 0)
	{
		val /= 10;
		n_len++;
	}
	dst = malloc ((n_len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	
	return (ft_putnbr(dst, n, n_len));
}
/* #include <stdio.h>
int	main()
{
	char *d;
	d = ft_itoa(55);
	printf("%s\n", d);
	free (d);
	return (0);
} */
