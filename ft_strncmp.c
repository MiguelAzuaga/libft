/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:53:49 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/18 20:11:41 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

//--- MAIN ---//

/* int main(int argc, char **argv)
{
	// Verify that there are 2 arguments
	if (argc != 4)
	{
		printf("Usage: %s <string 1> <string 2> <n bytes>\n", argv[0]);
		return (0);
	}

	const void *s1 = argv[1];
	const void *s2 = argv[2];
	size_t size = 0;
	size_t i = 0;

	// Converts the 3rd argument to integer
	while(argv[3][i] >= '0' && argv[3][i] <= '9')
	{
		size = size * 10 + (argv[3][i] - '0');
		i++;
	}

	// Test 1: Compare string 1 with string 2 for n characters using ft_strncmp
	printf("ft: %d\n", ft_strncmp(s1, s2, size));	// Expected 0 or diff


	// Test 2: Compare with function strncmp
	printf("strncmp: %d\n", strncmp(s1, s2, size));	// Expected 0 or diff

	// Test 3: Check if both match
	if (ft_strncmp(s1, s2, size) == strncmp(s1, s2, size))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
