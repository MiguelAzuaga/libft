/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:13:49 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/18 19:56:43 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int fill, size_t length)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < length)
	{
		*(ptr + i) = (unsigned char)fill;
		i++;
	}
	return (s);
}

//--- MAIN ---//

/* int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < size)
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
	if (argc != 4)
	{
		printf("Usage: %s <memory adress 1> <memory adress 2> <size bytes>\n"\
			, argv[0]);
		//printf(" <size bytes>\n");
		return (0);
	}

	char s1[10];
	char s2[10];
	char ptr1 = *argv[1];
	char ptr2 = *argv[2];
	size_t size = 0;
	size_t i = 0;

	// Converts the 3rd argument to integer
	while(argv[3][i] >= '0' && argv[3][i] <= '9')
	{
		size = size * 10 + (argv[3][i] - '0');
		i++;
	}

	// Test 1: Fill string with 'ptr1' using ft_memset
	ft_memset(s1, ptr1, size);
	s1[size] = '\0';
	printf("ft: %s\n", s1);		// Expected: 'ptr1' size times

	// Test 2: Compare with function memset
	memset(s2, ptr2, size);
	s2[size] = '\0';
	printf("memset: %s\n", s2);	// Expected: 'ptr2' size times

	// Test 3: Check if both match
	if (ft_memcmp(s1, s2, size) == 0)
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
