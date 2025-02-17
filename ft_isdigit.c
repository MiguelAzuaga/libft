/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:03:15 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/17 12:35:00 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0' &&  c <= '9') * 2048);
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

	// Test 1 Check if 'c1' is a digit character with ft_isdigit
	printf ("ft: %d\n", ft_isdigit(c1));	// Expected 0 or 2048

	// Test 2 Compare with function isdigit
	printf ("isdigit: %d\n", isdigit(c1));	// Expected 0 or 2048

	// Test 3 Check if both match
	if(ft_isdigit(c1) == isdigit(c1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
