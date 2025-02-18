/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:33:47 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/18 20:11:14 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -= 32);
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

	// Test 1 Transform 'c1' to uppercase with ft_toupper
	printf ("char ft: %c\n", ft_toupper(c1));	// Expected 'c1'
	printf ("ft: %d\n", ft_toupper(c1));		// Expected 'c1' or 'c1' - 32

	// Test 2 Compare with function toupper
	printf ("char toupper: %c\n", toupper(c1));	// Expected 'c1'
	printf ("toupper: %d\n", toupper(c1));		// Expected 'c1' or 'c1' - 32

	// Test 3 Check if both match
	if (ft_toupper(c1) == toupper(c1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
