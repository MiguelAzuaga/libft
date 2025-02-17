/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:41:18 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/17 16:08:32 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *ptr1;
	const unsigned char *ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;

	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

//--- MAIN ---//

/* int main(int argc, char **argv)
{
	// Verify that there are 2 arguments
	if (argc != 4)
	{
		printf("Usage: %s <memory pointer 1> <memory pointer 2> <n bytes>\n", argv[0]);
		return (0);
	}

	const void *ptr1 = argv[1];
	const void *ptr2 = argv[2];
	size_t size = 0;
	int i = 0;

	// Converts the 3rd argument to integer
	while(argv[3][i] >= '0' && argv[3][i] <= '9')
	{
		size = size * 10 + (argv[3][i] - '0');
		i++;
	}

	// Test 1: Compare memory block 1 with memory block 2 using ft_memcmp
	printf("ft: %d\n", ft_memcmp(m1, m2, size));	// Expected 0 or diff


	// Test 2: Compare with function memcmp
	printf("memcmp: %d\n", memcmp(m1, m2, size));	// Expected 0 or diff

	// Test 3: Check if both match
	if (ft_memcmp(m1, m2, size) == memcmp(m1, m2, size))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
