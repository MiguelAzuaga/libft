/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:43:32 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/14 17:57:44 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		return(c += 32);
	return(c);
}

//---main
/* 
int main()
{
    char c = 'C';
    printf("to upper: %c\n", tolower(c)); 
    printf("ft: %c\n", ft_tolower(c));
    return 0;
}
 */