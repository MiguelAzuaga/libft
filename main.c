/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:14:58 by mqueiros          #+#    #+#             */
/*   Updated: 2025/04/10 15:57:32 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	char				c1;
	char				c2;
	const char			src1[15] = "Hello 42";
	char				dst1[15];
	const char			src2[15] = "World!";
	char				dst2[15];
	char				*ptr1;
	char				*ptr2;
	long unsigned int	i;
	int					offset;
	
	c1 = '!';
	c2 = 'I';
	offset = 0;
	
	printf("isalpha:\n");
	printf("char is:\"%c\", expected output is:\"%d\"\n", c1, isalpha(c1));
	printf("char is:\"%c\", ft output is:\"%d\"\n\n", c1, ft_isalpha(c1));
	
	
	printf("isdigit:\n");
	printf("char is:\"%c\", expected output is:\"%d\"\n", c1, isdigit(c1));
	printf("char is:\"%c\", ft output is:\"%d\"\n\n", c1, ft_isdigit(c1));
	

	printf("isalnum:\n");
	printf("char is:\"%c\", expected output is:\"%d\"\n", c1, isalnum(c1));
	printf("char is:\"%c\", ft output is:\"%d\"\n\n", c1, ft_isalnum(c1));
	

	printf("isascii:\n");
	printf("char is:\"%c\", expected output is:\"%d\"\n", c1, isascii(c1));
	printf("char is:\"%c\", ft output is:\"%d\"\n\n", c1, ft_isascii(c1));
	

	printf("isprint:\n");
	printf("char is:\"%c\", expected output is:\"%d\"\n", c1, isprint(c1));
	printf("char is:\"%c\", ft output is:\"%d\"\n\n", c1, ft_isprint(c1));
	

	printf("strlen:\n");
	printf("expected output is:\"%ld\"\n", strlen(dst1));
	printf("ft output is:\"%ld\"\n\n", ft_strlen(dst1));


	printf("memset:\n");
	i = -1;
	strcpy(dst1, src1);
	memset(dst1, c1, sizeof(dst1));
	while (++i < sizeof(dst1))
		printf("char is:\"%c\", expected output at pos(%ld) is:\"%c\"\n", c1, i, dst1[i]);

	i = -1;
	strcpy(dst1, src1);
	ft_memset(dst1, c1, sizeof(dst1));
	while (++i < sizeof(dst1))	
		printf("char is:\"%c\", ft output at pos(%ld) is:\"%c\"\n", c1, i, dst1[i]);
	printf("\n");


	printf("bzero:\n");
	strcpy(dst1, src1);
	bzero(dst1, sizeof(dst1));
	printf("expected output is:\"%s\"\n", dst1);
	
	strcpy(dst1, src1);
	ft_bzero(dst1, sizeof(dst1));
	printf("ft output is:\"%s\"\n", dst1);
	printf("\n");


	printf("memcpy:\n");
	strcpy(dst1, src1);
	memcpy(dst1 + offset, dst1, sizeof(dst1));
	printf("expected output is:\"%s\"\n", dst1);
	
	strcpy(dst1, src1);
	ft_memcpy(dst1 + offset, dst1, sizeof(dst1));
	printf("ft output is:\"%s\"\n", dst1);
	printf("\n");


	printf("memmove:\n");
	strcpy(dst1, src1);
	memmove(dst1 + offset, dst1, sizeof(dst1));
	printf("expected output is:\"%s\"\n", dst1);
	
	strcpy(dst1, src1);
	ft_memmove(dst1 + offset, dst1, sizeof(dst1));
	printf("ft output is:\"%s\"\n", dst1);
	printf("\n");


	printf("strlcpy:\n");
	strcpy(dst1, src1);
	strlcpy(dst1, src1, sizeof(src1));
	printf("expected output is:\"%s\"\n", dst1);
	
	strcpy(dst1, src1);
	ft_strlcpy(dst1, src1, sizeof(src1));
	printf("ft output is:\"%s\"\n", dst1);
	printf("\n");


	printf("strlcat:\n");
	strcpy(dst1, src1);
	strcpy(dst2, src2);
	strlcat(dst2, dst1, sizeof(src1));
	printf("expected output is:\"%s\"\n", dst2);
	
	strcpy(dst1, src1);
	strcpy(dst2, src2);
	ft_strlcat(dst2, dst1, sizeof(src1));
	printf("ft output is:\"%s\"\n", dst2);
	printf("\n");
	
	
	printf("toupper:\n");
	printf("char is:\"%c\", expected output is:\"%c\"\n", c1, toupper(c1));
	printf("char is:\"%c\", ft output is:\"%c\"\n\n", c1, ft_toupper(c1));
	
	
	printf("tolower:\n");
	printf("char is:\"%c\", expected output is:\"%c\"\n", c2, tolower(c2));
	printf("char is:\"%c\", ft output is:\"%c\"\n\n", c2, ft_tolower(c2));


	printf("strchr:\n");
	strcpy(dst1, src1);
	printf("char is:\"%c\", str is:\"%s\", expected output is:\"%s\"\n", c1, dst1, strchr(dst1, c1));
	printf("char is:\"%c\", str is:\"%s\", ft output is:\"%s\"\n", c1, dst1, ft_strchr(dst1, c1));
	printf("\n");


	printf("strrchr:\n");
	strcpy(dst1, src1);
	printf("char is:\"%c\", str is:\"%s\", expected output is:\"%s\"\n", c1, dst1, strrchr(dst1, c1));
	printf("char is:\"%c\", str is:\"%s\", ft output is:\"%s\"\n", c1, dst1, ft_strrchr(dst1, c1));
	printf("\n");


	printf("strncmp:\n");
	strcpy(dst1, src1);
	strcpy(dst2, src2);
	printf("1st str is:\"%s\", 2nd str is:\"%s\", expected output is:\"%d\"\n", dst1, dst2, strncmp(dst1, dst2, 4));
	printf("1st str is:\"%s\", 2nd str is:\"%s\", ft output is:\"%d\"\n", dst1, dst2, ft_strncmp(dst1, dst2, 4));
	printf("\n");


	printf("memchr:\n");
	strcpy(dst1, src1);
	printf("char is:\"%c\", str is:\"%s\", expected output is:\"%p\"\n", c1, dst1, memchr(dst1, c1, 9));
	printf("char is:\"%c\", str is:\"%s\", ft output is:\"%p\"\n", c1, dst1, ft_memchr(dst1, c1,	9));
	printf("\n");


	printf("memcmp:\n");
	strcpy(dst1, src1);
	strcpy(dst2, src2);
	printf("1st str is:\"%s\", 2nd str is:\"%s\", expected output is:\"%d\"\n", dst1, dst2, memcmp(dst1, dst2, 4));
	printf("1st str is:\"%s\", 2nd str is:\"%s\", ft output is:\"%d\"\n", dst1, dst2, ft_memcmp(dst1, dst2, 4));
	printf("\n");


	printf("strnstr:\n");
	strcpy(dst1, src1);
	strcpy(dst2, src2);
	//printf("1st str is:\"%s\", 2nd str is:\"%s\", expected output is:\"%s\"\n", dst1, dst2, strnstr(dst1, dst2, 4));
	printf("1st str is:\"%s\", 2nd str is:\"%s\", ft output is:\"%s\"\n", dst1, dst2, ft_strnstr(dst1, dst1, 4));
	printf("\n");


	printf("atoi:\n");
	strcpy(dst1, src1);
	printf("num is:\"%d\", str is:\"%s\", expected output is:\"%d\"\n", 42, dst1, atoi("   -42"));
	printf("num is:\"%d\", str is:\"%s\", ft output is:\"%d\"\n", 42, dst1, ft_atoi("   -42"));
	printf("\n");


	printf("calloc:\n");
	ptr1 = calloc(15, sizeof(int));
	ptr2 = ft_calloc(15, sizeof(int));
	printf("comparing mem between \"%s\" and \"%s\", output is:\"%d\"\n", "calloc", "ft_calloc", ft_memcmp(ptr1, ptr2, 15));
	printf("\n");


	printf("strdup:\n");
	strcpy(dst1, src1);
	printf("str is:\"%s\", expected output is:\"%s\"\n", dst1, strdup(dst1));
	strcpy(dst1, src1);
	printf("str is:\"%s\", ft output is:\"%s\"\n", dst1, ft_strdup(dst1));
	printf("\n");

	return(0);
}
