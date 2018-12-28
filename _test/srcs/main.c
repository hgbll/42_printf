/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:20:10 by hbally            #+#    #+#             */
/*   Updated: 2018/12/22 17:51:17 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_test.h"

int		main(void)
{
	debug_printmemory();
	printf("\n|0       |10       |20\n");
	test_string();
	test_int();
	test_real();
	return (0);
}
