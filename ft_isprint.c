/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:57:39 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/17 12:37:56 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	return ((c >= 32 && c <= 126) * 16384);
}

//--- MAIN ---//

/* int main(int argc, char **argv)
{
	// Verify that there is 1 argument
	if (argc != 2)
	{
		printf("Plase insert 1 character\n");
		return (0);
	}

	char c1 = *argv[1];

	// Test 1 Check if 'c1' is a printable character with ft_isprint
	printf ("ft: %d\n", ft_isprint(c1));	// Expected 0 or 2048

	// Test 2 Compare with function isprint
	printf ("isprint: %d\n", isprint(c1));	// Expected 0 or 2048

	// Test 3 Check if both match
	if(ft_isprint(c1) == isprint(c1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
