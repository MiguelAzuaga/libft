/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:57:49 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/14 17:14:57 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

//---main
/* 
int main()
{
    char c = '1';
    printf ("is alnum? %d\n", isalnum(c));
    printf ("is ft? %d\n", ft_isalnum(c));
    return (0);
}
 */