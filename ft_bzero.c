/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:45:37 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/17 13:13:39 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t length)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < length)
	{
		*(ptr + i) = '\0';
		i++;
	}
	return (s);
}

//--- MAIN ---//

/* int main(int argc, char **argv)
{
	// Verify that there are 2 arguments
	if (argc != 3)
	{
		printf("Plase insert 1 string and 1 size\n");
		return (0);
	}

	char *s1 = argv[1];
	char *s2 = argv[1];
	int	size = 0;
	int i = 0;

	// Get the number of characters to convert
	while(argv[2][i] >= '0' && argv[2][i] <= '9')
	{
		size = size * 10 + (argv[2][i] - '0');
		i++;
	}

	// Test 1: Fill string with '\0' using ft_bzero
	printf("before ft: %s\n", s1);		// Expected: '\0'
	ft_bzero(s1, size);
	s1[size] = '\0';
	printf("ft: %s\n", s1);		// Expected: '\0'

	// Test 2: Compare with function bzero
	printf("before bzero: %s\n", s1);		// Expected: '\0'
	bzero(s2, size);
	s2[size] = '\0';
	printf("bzero: %s\n", s2);	// Expected: '\0'

	// Test 3: Check if both match
	if (memcmp(s1, s2, size) == 0)  /////////////// CHANGE
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
