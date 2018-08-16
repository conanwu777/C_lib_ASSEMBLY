/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 15:01:14 by cwu               #+#    #+#             */
/*   Updated: 2018/08/13 15:01:27 by cwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "libfts/libfts.h"
# include <stdio.h>
# include <strings.h>
# include <ctype.h>

# define RED "\e[1;38;2;225;20;20m"
# define WHITE "\e[1;38;2;255;251;214m"
# define YELLO "\e[1;38;2;255;200;0m"
# define ORANGE "\e[1;38;2;255;120;10m"

int bzero_test(void);
int strcat_test(void);
int is_test(void);
int is_test2(void);
int is_test3(void);
int to_test(void);
int puts_test(void);
int memcpy_test(void);
int cat_test(void);
int bonus_test(void);

#endif
