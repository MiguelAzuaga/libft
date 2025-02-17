/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:03:15 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/17 12:35:10 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((c >= 'a' &&  c <= 'z') ||
			(c >= 'A' &&  c <= 'Z')) * 1024);
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

	// Test 1 Check if 'c1' is an alpha character with ft_isalpha
	printf ("ft: %d\n", ft_isalpha(c1));	// Expected 0 or 1024

	// Test 2 Compare with function isalpha
	printf ("isalpha: %d\n", isalpha(c1));	// Expected 0 or 1024

	// Test 3 Check if both match
	if(ft_isalpha(c1) == isalpha(c1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
