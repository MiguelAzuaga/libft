/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:57:24 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/18 18:26:43 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127) * 1);
}

//--- MAIN ---//

/* int main(int argc, char **argv)
{
	// Verify that there is 1 argument
	if (argc != 2)
	{
		printf("Usage %s <character>\n", argv[0]);
		return (0);
	}

	char c1 = *argv[1];

	// Test 1 Check if 'c1' is an ascii character with ft_isascii
	printf ("ft: %d\n", ft_isascii(c1));	// Expected 0 or 1

	// Test 2 Compare with function isascii
	printf ("isascii: %d\n", isascii(c1));	// Expected 0 or 1

	// Test 3 Check if both match
	if(ft_isascii(c1) == isascii(c1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
