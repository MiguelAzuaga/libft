/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:29:04 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/17 16:09:28 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
#include <ctype.h>
#include <string.h>

//check ASCII table
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

size_t	ft_strlen(const char *s);
int 	ft_toupper(int c);
int		ft_tolower(int c);

void	*ft_memset(void *s, int fill, size_t length);
void	*ft_bzero(void *s, size_t length);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
