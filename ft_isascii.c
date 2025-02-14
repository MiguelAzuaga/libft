/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:57:24 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/14 17:15:03 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

//---main
/* 
int main()
{
    char c = '1';
    printf ("is ascii? %d\n", isascii(c));
    printf ("is ft? %d\n", ft_isascii(c));
    return (0);
}
 */