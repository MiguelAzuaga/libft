/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:57:39 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/14 17:14:54 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

//---main
/* 
int main()
{
    char c = '1';
    printf ("is print? %d\n", isprint(c));
    printf ("is ft? %d\n", ft_isprint(c));
    return (0);
}
 */