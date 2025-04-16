#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* --- Function Callbacks for ft_strmapi, ft_striteri, ft_lstmap, ft_lstiter --- */

char	map_increment(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

void	iteri_increment(unsigned int i, char *c)
{
	*c += i;
}

void	*lst_dup_content(void *content)
{
	return (ft_strdup((char *)content));
}

void	lst_print_content(void *content)
{
	printf(" - %s\n", (char *)content);
}

/* --- Tests --- */

void	test_char_functions(void)
{
	printf("--- Character Checks ---\n");
	printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
	printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
	printf("ft_isalnum('z') = %d\n", ft_isalnum('z'));
	printf("ft_isascii(128) = %d\n", ft_isascii(128));
	printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
	printf("ft_toupper('a') = %c\n", ft_toupper('a'));
	printf("ft_tolower('Z') = %c\n\n", ft_tolower('Z'));
}

void	test_string_functions(void)
{
	char str[] = "Hello, world!";
	char buf[50];

	printf("--- String Functions ---\n");
	printf("ft_strlen(\"Hello\") = %zu\n", ft_strlen("Hello"));

	ft_memset(buf, 'A', 5);
	buf[5] = '\0';
	printf("ft_memset: %s\n", buf);

	char bzero_buf[5] = "ABCD";
	ft_bzero(bzero_buf, 2);
	printf("ft_bzero: %s\n", bzero_buf);

	strcpy(buf, "123456789");
	ft_memcpy(buf + 2, "abc", 3);
	printf("ft_memcpy: %s\n", buf);

	strcpy(buf, "abcdef");
	ft_memmove(buf + 2, buf, 4);
	printf("ft_memmove: %s\n", buf);

	char src[] = "Copy this!";
	char dest[20];
	ft_strlcpy(dest, src, 20);
	printf("ft_strlcpy: %s\n", dest);

	char cat1[30] = "Hello ";
	ft_strlcat(cat1, "World!", 30);
	printf("ft_strlcat: %s\n", cat1);

	printf("ft_strchr: %s\n", ft_strchr("Hello", 'l'));
	printf("ft_strrchr: %s\n", ft_strrchr("Hello", 'l'));
	printf("ft_strncmp(\"abc\", \"abd\", 2): %d\n", ft_strncmp("abc", "abd", 2));
	printf("ft_memchr: %s\n", (char *)ft_memchr("abcdef", 'd', 6));
	printf("ft_memcmp(\"abc\", \"abc\"): %d\n", ft_memcmp("abc", "abc", 3));
	printf("ft_strnstr: %s\n\n", ft_strnstr("Hello World", "World", 11));
}

void	test_conversion_allocation(void)
{
	printf("--- Conversions & Memory ---\n");
	printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));

	char *s = ft_strdup("Libft");
	printf("ft_strdup: %s\n", s);
	free(s);

	s = ft_substr("libft tester", 6, 6);
	printf("ft_substr: %s\n", s);
	free(s);

	s = ft_strjoin("Hello, ", "World!");
	printf("ft_strjoin: %s\n", s);
	free(s);

	s = ft_strtrim("  xxx trimmed xx ", " x");
	printf("ft_strtrim: '%s'\n", s);
	free(s);

	char **split = ft_split("one,two,three", ',');
	printf("ft_split:\n");
	for (int i = 0; split[i]; i++)
	{
		printf("  - %s\n", split[i]);
		free(split[i]);
	}
	free(split);

	s = ft_itoa(-2147483648);
	printf("ft_itoa: %s\n", s);
	free(s);

	s = ft_strmapi("abc", map_increment);
	printf("ft_strmapi: %s\n", s);
	free(s);

	char str[] = "ABC";
	ft_striteri(str, iteri_increment);
	printf("ft_striteri: %s\n", str);

	char c = 'X';
	printf("ft_putchar_fd: ");
	ft_putchar_fd(c, 1);
	printf("\nft_putstr_fd: ");
	ft_putstr_fd("Hello", 1);
	printf("\nft_putendl_fd: ");
	ft_putendl_fd("Hello", 1);
	printf("ft_putnbr_fd: ");
	ft_putnbr_fd(-1234, 1);
	printf("\n\n");
}

void	test_bonus_linked_list(void)
{
	printf("--- Linked List Bonus ---\n");
	t_list *node1 = ft_lstnew("One");
	t_list *node2 = ft_lstnew("Two");
	t_list *node3 = ft_lstnew("Three");

	ft_lstadd_front(&node1, node2);
	ft_lstadd_back(&node1, node3);

	printf("List size: %d\n", ft_lstsize(node1));
	printf("Last element: %s\n", (char *)ft_lstlast(node1)->content);

	t_list *copy = ft_lstmap(node1, lst_dup_content, free);
	printf("Mapped list:\n");
	ft_lstiter(copy, lst_print_content);

	ft_lstclear(&copy, free);
	ft_lstclear(&node1, NULL); // Original content wasn't dynamically allocated
	printf("\n");
}

int	main(void)
{
	test_char_functions();
	test_string_functions();
	test_conversion_allocation();
	test_bonus_linked_list();
	return (0);
}
