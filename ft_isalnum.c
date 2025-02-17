/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:57:49 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/17 12:34:54 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int ft_isalpha(int c)
{
	return (((c >= 'a' &&  c <= 'z') ||
			(c >= 'A' &&  c <= 'Z')) * 1024);
}

int ft_isdigit(int c)
{
	return ((c >= '0' &&  c <= '9') * 2048);
} */

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)) * 8);
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

	// Test 1 Check if 'c1' is an alphanumerical character with ft_isalnum
	printf ("ft: %d\n", ft_isalnum(c1));	// Expected 0 or 8

	// Test 2 Compare with function isalnum
	printf ("isalnum: %d\n", isalnum(c1));	// Expected 0 or 8

	// Test 3 Check if both match
	if(ft_isalnum(c1) == isalnum(c1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
