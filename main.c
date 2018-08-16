/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:59:54 by cwu               #+#    #+#             */
/*   Updated: 2018/08/13 14:59:57 by cwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		bonus_test2(void)
{
	int		x;
	void	*str;
	char	*s;

	x = 0xff00000c;
	str = (void*)(&x);
	printf("%sPrint binary test:\n", ORANGE);
	printf("%s\tft_print_binary:%s\n", WHITE, YELLO);
	ft_putchar('\t');
	ft_putchar('\t');
	ft_print_binary(str, 4);
	ft_putchar('\n');
	s = ft_strnew(100);
	strcpy(s, "new");
	printf("%sStrnew test:\n", ORANGE);
	printf("%s\tft_strnew:\n\t\t%s%s\n", WHITE, YELLO, s);
	free(s);
	return (0);
}

int		main(void)
{
	bzero_test();
	strcat_test();
	is_test();
	is_test2();
	is_test3();
	to_test();
	puts_test();
	memcpy_test();
	cat_test();
	bonus_test();
	bonus_test2();
	return (0);
}
