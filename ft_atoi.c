/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:59:30 by mqueiros          #+#    #+#             */
/*   Updated: 2025/02/18 20:09:15 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9') * 2048);
} */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

//--- MAIN ---//

/* int main(int argc, char **argv)
{
	// Verify that there is 1 argument
	if (argc != 2)
	{
		printf("Usage %s <number>\n", argv[0]);
		return (0);
	}

	char *c1 = argv[1];

	// Test 1 Transform 'c1' from char to int with ft_atoi
	printf ("ft: %d\n", ft_atoi(c1));	// Expected (int)c1

	// Test 2 Compare with function atoi
	printf ("atoi: %d\n", atoi(c1));	// Expected (int)c1

	// Test 3 Check if both match
	if (ft_atoi(c1) == atoi(c1))
		printf("Test Passed ✅\n");
	else
		printf("Test Failed ❌\n");

	return (0);
} */
