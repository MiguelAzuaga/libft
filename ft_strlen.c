/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:01:54 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/14 17:15:11 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	int index;
	
	index = 0;
	while(s[index] != '\0')
		index++;
	return(index);
}

//---main
/* 
int main()
{
    char *s = "test";
    printf ("str len: %lu\n", strlen(s));
    printf ("ft: %lu\n", ft_strlen(s));
    return (0);
}
 */