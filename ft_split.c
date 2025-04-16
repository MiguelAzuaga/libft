/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:08:34 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/16 11:19:36 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **s, size_t count)
{
	while (count--)
		free(s[count]);
	free(s);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_fill_split(const char *s, char c, size_t count, char **split)
{
	size_t	i;
	size_t	word_size;

	i = 0;
	while (*s && i < count)
	{
		while (*s == c)
			s++;
		word_size = 0;
		while (s[word_size] && s[word_size] != c)
			word_size++;
		split[i] = ft_substr(s, 0, word_size);
		if (!split[i])
		{
			ft_free_split(split, i);
			return (NULL);
		}
		s += word_size;
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**split;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	split = malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (ft_fill_split(s, c, word_count, split));
}
