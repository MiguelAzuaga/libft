/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:45:37 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/18 19:24:48 by mqueiros         ###   ########.fr       */
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

/* int ft_memcmp(const void *s1, const void *s2, size_t n)
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

int main(int argc, char **argv)
{
	// Verify that there are 2 arguments
	if (argc != 3)
	{
		printf("Usage: %s <memory pointer> <n bytes>\n", argv[0]);
		return (0);
	}

	char *s1 = argv[1];
	char *s2 = argv[1]; /// --- CHANGE --- ///
	size_t size = 0;
	size_t i = 0;

	// Converts the 2nd argument to integer
	while(argv[2][i] >= '0' && argv[2][i] <= '9')
	{
		size = size * 10 + (argv[2][i] - '0');
		i++;
	}

	// Test 1: Fill string with '\0' using ft_bzero
	printf("before ft: %s\n", s1);		// Expected: "s1"
	ft_bzero(s1, size);
	s1[size] = '\0';
	printf("ft: %s\n", s1);				// Expected: '\0'

	// Test 2: Compare with function bzero
	printf("before bzero: %s\n", s2);	// Expected: "s2"
	bzero(s2, size);
	s2[size] = '\0';
	printf("bzero: %s\n", s2);			// Expected: '\0'

	// Test 3: Check if both match
	if (ft_memcmp(s1, s2, size) == 0)
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
