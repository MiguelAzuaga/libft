/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:03:15 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/14 12:01:25 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' &&  c <= '9')
        return (1);
    return (0);
}

//----main
/* 
int main()
{
    char c = 'a';
    printf ("is digit? %d\n", isdigit(c));
    printf ("is ft? %d\n", ft_isdigit(c));
    return (0);
}

 */