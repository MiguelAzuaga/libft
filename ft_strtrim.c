/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:21:11 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/14 17:29:26 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
/*
#include <stdio.h>
int main() {
	// Test case 1: Trim spaces
	char *s1 = "  hello world  ";
	char *set = " ";
	char *result = ft_strtrim(s1, set);
	printf("Test 1 - Trim spaces: '%s'\n", result);
	free(result);

	// Test case 2: Trim custom characters
	s1 = " ---hello world-- ";
	set = "- ";
	result = ft_strtrim(s1, set);
	printf("Test 2 - Trim hyphens: '%s'\n", result);
	free(result);

	// Test case 3: No characters to trim
	s1 = "hello";
	set = " ";
	result = ft_strtrim(s1, set);
	printf("Test 3 - No trim needed: '%s'\n", result);
	free(result);

	// Test case 4: Entire string is made of set characters
	s1 = "###";
	set = "#";
	result = ft_strtrim(s1, set);
	printf("Test 4 - Entire string trimmed: '%s'\n", result);
	free(result);

	// Test case 5: Empty string
	s1 = "";
	set = " ";
	result = ft_strtrim(s1, set);
	printf("Test 5 - Empty string: '%s'\n", result);
	free(result);

	return 0;
}
*/
