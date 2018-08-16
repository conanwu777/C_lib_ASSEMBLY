/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:18:18 by cwu               #+#    #+#             */
/*   Updated: 2018/08/13 15:00:13 by cwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	to_test(void)
{
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;

	c1 = 't';
	c2 = 'O';
	c3 = ' ';
	c4 = 'B';
	c5 = 'e';
	printf("%sToupper test:\n", ORANGE);
	printf("%s\ttoupper:\n\t\t%c, %c, %c, %c, %c\n", WHITE,
		toupper(c1), toupper(c2), toupper(c3), toupper(c4), toupper(c5));
	printf("\tft_toupper:\n\t\t%s%c, %c, %c, %c, %c\n\n", YELLO,
		ft_toupper(c1), ft_toupper(c2), ft_toupper(c3),
		ft_toupper(c4), ft_toupper(c5));
	printf("%sTolower test:\n", ORANGE);
	printf("%s\ttolower:\n\t\t%c, %c, %c, %c, %c\n", WHITE,
		tolower(c1), tolower(c2), tolower(c3), tolower(c4), tolower(c5));
	printf("\tft_toupper:\n\t\t%s%c, %c, %c, %c, %c\n\n", YELLO,
		ft_tolower(c1), ft_tolower(c2), ft_tolower(c3),
		ft_tolower(c4), ft_tolower(c5));
	return (0);
}

int	puts_test(void)
{
	char *s1;
	char *s2;

	s1 = malloc(100);
	s2 = malloc(100);
	strcpy(s1, "To be or not to be");
	strcpy(s2, "To be or not to be");
	printf("%sPuts test:\n", ORANGE);
	printf("%s\tputs:\n\t\t", WHITE);
	puts(s1);
	printf("\n\tft_puts:%s\n", YELLO);
	write(1, "\t\t", 2);
	ft_puts(s2);
	printf("\n\n");
	printf("%sStrlen test:\n", ORANGE);
	printf("%s\tstrlen:\n\t\t%zu\n", WHITE, strlen(s1));
	printf("\tft_strlen:\n\t\t%s%zu\n\n", YELLO, ft_strlen(s2));
	memset(s1, '*', 7);
	ft_memset(s2, '*', 7);
	printf("%sMemset test:\n", ORANGE);
	printf("%s\tmemset:\n\t\t%s\n", WHITE, s1);
	printf("\tft_memset:\n\t\t%s%s\n\n", YELLO, s2);
	free(s1);
	free(s2);
	return (0);
}

int	memcpy_test(void)
{
	char *s1;
	char *s2;
	char *t1;
	char *t2;

	s1 = ft_strnew(100);
	s2 = ft_strnew(100);
	memcpy(s1, "To be or not to be, that is the question", 18);
	ft_memcpy(s2, "To be or not to be, that is the question", 18);
	printf("%sMemcpy test:\n", ORANGE);
	printf("%s\tmemcpy:\n\t\t%s\n", WHITE, s1);
	printf("\tft_memcpy:%s\n\t\t%s\n\n", YELLO, s2);
	t1 = strdup(s1);
	t2 = strdup(s2);
	printf("%sStrdup test:\n", ORANGE);
	printf("%s\tstrdup:\n\t\t%s\n", WHITE, t1);
	printf("\tft_strdup:\n\t\t%s%s\n\n", YELLO, t2);
	free(s1);
	free(s2);
	free(t1);
	free(t2);
	return (0);
}

int	cat_test(void)
{
	int fd;

	fd = open("hamlet", O_RDONLY);
	printf("%sCat test:\n", ORANGE);
	printf("%s\tft_cat:%s\n", WHITE, YELLO);
	ft_cat(fd);
	return (0);
}

int	bonus_test(void)
{
	printf("%sPutchar test:\n", ORANGE);
	printf("%s\tft_putchar:%s\n", WHITE, YELLO);
	ft_putchar('\t');
	ft_putchar('\t');
	ft_putchar('c');
	ft_putchar('\n');
	printf("%sPutnbr test:\n", ORANGE);
	printf("%s\tft_putnbr:%s\n", WHITE, YELLO);
	ft_putchar('\t');
	ft_putchar('\t');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	printf("%sPutbbyte test:\n", ORANGE);
	printf("%s\tft_putbbyte:%s\n", WHITE, YELLO);
	ft_putchar('\t');
	ft_putchar('\t');
	ft_putbbyte(12);
	ft_putchar('\n');
	return (0);
}
