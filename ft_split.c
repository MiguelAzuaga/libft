/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:08:34 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/15 09:49:00 by mqueiros         ###   ########.fr       */
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

	i = 1;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
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

/*
#include <stdio.h>

void	print_split(char **split)
{
	int i = 0;

	while (split && split[i])
	{
		printf("split[%d] = \"%s\"\n", i, split[i]);
		i++;
	}
	if (split)
		ft_free_split(split, i);
}


int	main(void)
{
	char *str1 = "   Hello   world  this is a test ";
	char *str2 = "42";
	char *str3 = "";
	char *str4 = "    ";
	char *str5 = "Hello42World";
	char **ans;

	printf("Test 1:\n");
	ans = ft_split(str1, ' ');
	print_split(ans);

	printf("\nTest 2:\n");
	ans = ft_split(str2, ' ');
	print_split(ans);

	printf("\nTest 3:\n");
	ans = ft_split(str3, ' ');
	print_split(ans);

	printf("\nTest 4:\n");
	ans = ft_split(str4, ' ');
	print_split(ans);

	printf("\nTest 5:\n");
	ans = ft_split(str5, '4');
	print_split(ans);

	return (0);
}
*/
