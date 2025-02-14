/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:33:47 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/14 17:43:47 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		return(c -= 32);
	return(c);
}

//---main
/* 
int main()
{
    char c = 'h';
    printf("to upper: %c\n", toupper(c)); 
    printf("ft: %c\n", ft_toupper(c));
    return 0;
}
 */