/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:01:54 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/18 20:11:52 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	return (index);
}

//--- MAIN ---//

/* int main(int argc, char **argv)
{
	// Verify that there is 1 argument
	if (argc != 2)
	{
		printf("Usage %s <string>\n", argv[0]);
		return (0);
	}

	char *s1 = argv[1];

	// Test 1 Check how many characters ft_strlen has with ft_strlen
	printf ("ft: %lu\n", ft_strlen(s1));	// Expected size of string

	// Test 2 Compare with function strlen
	printf ("strlen: %lu\n", strlen(s1));	// Expected size of string

	// Test 3 Check if both match
	if (ft_strlen(s1) == strlen(s1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
