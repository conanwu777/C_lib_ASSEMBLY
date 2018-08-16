/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:18:18 by cwu               #+#    #+#             */
/*   Updated: 2018/08/13 15:00:09 by cwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	bzero_test(void)
{
	char *s1;
	char *s2;

	s1 = malloc(100);
	s2 = malloc(100);
	strcpy(s1, "To be or not to be");
	strcpy(s2, "To be or not to be");
	bzero(s1, 10);
	ft_bzero(s2, 10);
	strcpy(s1, "zero");
	strcpy(s2, "zero");
	printf("%sBzero test:\n", ORANGE);
	printf("%s\tbzero:\n\t\t%s\n", WHITE, s1);
	printf("\tft_bzero:\n\t\t%s%s\n\n", YELLO, s2);
	free(s1);
	free(s2);
	return (0);
}

int	strcat_test(void)
{
	char *s1;
	char *s2;
	char *t1;
	char *t2;

	s1 = ft_strnew(100);
	t1 = ft_strnew(100);
	strcpy(s1, "To be or not to be, ");
	strcpy(t1, "To be or not to be, ");
	s2 = "that is the question";
	t2 = "that is the question";
	strcat(s1, s2);
	ft_strcat(t1, t2);
	printf("%sStrcat test:\n", ORANGE);
	printf("%s\tstrcat:\n\t\t%s\n", WHITE, s1);
	printf("\tft_strcat:\n\t\t%s%s\n\n", YELLO, t1);
	free(s1);
	free(t1);
	return (0);
}

int	is_test(void)
{
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;

	c1 = 'C';
	c2 = 'c';
	c3 = '7';
	c4 = '*';
	c5 = 255;
	printf("%sIsalpha test:\n", ORANGE);
	printf("%s\tisalpha:\n\t\t%d, %d, %d, %d, %d\n", WHITE,
		isalpha(c1), isalpha(c2), isalpha(c3), isalpha(c4), isalpha(c5));
	printf("\tft_isalpha:\n\t\t%s%d, %d, %d, %d, %d\n\n", YELLO,
		ft_isalpha(c1), ft_isalpha(c2), ft_isalpha(c3),
		ft_isalpha(c4), ft_isalpha(c5));
	printf("%sIsdigit test:\n", ORANGE);
	printf("%s\tisdigit:\n\t\t%d, %d, %d, %d, %d\n", WHITE,
		isdigit(c1), isdigit(c2), isdigit(c3), isdigit(c4), isdigit(c5));
	printf("\tft_isdigit:\n\t\t%s%d, %d, %d, %d, %d\n\n", YELLO,
		ft_isdigit(c1), ft_isdigit(c2), ft_isdigit(c3),
		ft_isdigit(c4), ft_isdigit(c5));
	return (0);
}

int	is_test2(void)
{
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;

	c1 = 'C';
	c2 = 'c';
	c3 = '7';
	c4 = '*';
	c5 = 255;
	printf("%sIsalnum test:\n", ORANGE);
	printf("%s\tisalnum:\n\t\t%d, %d, %d, %d, %d\n", WHITE,
		isalnum(c1), isalnum(c2), isalnum(c3), isalnum(c4), isalnum(c5));
	printf("\tft_isalnum:\n\t\t%s%d, %d, %d, %d, %d\n\n", YELLO,
		ft_isalnum(c1), ft_isalnum(c2), ft_isalnum(c3),
		ft_isalnum(c4), ft_isalnum(c5));
	printf("%sIsascii test:\n", ORANGE);
	printf("%s\tisascii:\n\t\t%d, %d, %d, %d, %d\n", WHITE,
		isascii(c1), isascii(c2), isascii(c3), isascii(c4), isascii(c5));
	printf("\tft_isascii:\n\t\t%s%d, %d, %d, %d, %d\n\n", YELLO,
		ft_isascii(c1), ft_isascii(c2), ft_isascii(c3),
		ft_isascii(c4), ft_isascii(c5));
	return (0);
}

int	is_test3(void)
{
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;

	c1 = 'C';
	c2 = 'c';
	c3 = '7';
	c4 = '*';
	c5 = 255;
	printf("%sIsprint test:\n", ORANGE);
	printf("%s\tisprint:\n\t\t%d, %d, %d, %d, %d\n", WHITE,
		isprint(c1), isprint(c2), isprint(c3), isprint(c4), isprint(c5));
	printf("\tft_isprint:\n\t\t%s%d, %d, %d, %d, %d\n\n", YELLO,
		ft_isprint(c1), ft_isprint(c2), ft_isprint(c3),
		ft_isprint(c4), ft_isprint(c5));
	return (0);
}
