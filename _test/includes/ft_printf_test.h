/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:37:12 by hbally            #+#    #+#             */
/*   Updated: 2018/12/22 12:24:00 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_TEST_H
# define FT_PRINTF_TEST_H

# include "stdio.h"
# include "limits.h"
# include "libft.h"

int		ft_printf(const char *format, ...);
void	debug_printmemory(void);
void	test_char();
void	test_string();
void 	test_int();
void	test_real();
void	test_misc();

#endif
