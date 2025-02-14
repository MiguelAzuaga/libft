/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:03:15 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/13 17:24:45 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' &&  c <= 'z') ||
    (c >= 'A' &&  c <= 'Z'))
        return (1);
    return (0);
}

//----main
/* 
int main()
{
    char c = '@';
    printf ("%d\n", ft_isalpha(c));
    printf ("%d\n", isalpha(c));
    return (0);
}
 */
