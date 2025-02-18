/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:43:32 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/18 20:10:58 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	return (c);
}

//--- MAIN ---//

/* int	main(int argc, char **argv)
{
	// Verify that there is 1 argument
	if (argc != 2)
	{
		printf("Usage %s <character>\n", argv[0]);
		return (0);
	}

	char c1 = *argv[1];

	// Test 1 Transform 'c1' to lowercase with ft_tolower
	printf ("char ft: %c\n", ft_tolower(c1));	// Expected 'c1'
	printf ("ft: %d\n", ft_tolower(c1));		// Expected 'c1' or 'c1' + 32

	// Test 2 Compare with function tolower
	printf ("char tolower: %c\n", tolower(c1));	// Expected 'c1'
	printf ("tolower: %d\n", tolower(c1));		// Expected 'c1' or 'c1' + 32

	// Test 3 Check if both match
	if (ft_tolower(c1) == tolower(c1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
