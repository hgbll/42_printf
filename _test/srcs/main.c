/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:20:10 by hbally            #+#    #+#             */
/*   Updated: 2018/12/31 15:16:13 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_test.h"

int		main(int argc, char **argv)
{
	if (!strcmp(argv[1], "printf"))
	{
//		test_int(&printf);
		test_double(&printf);
	}
	if (!strcmp(argv[1], "ft_printf"))
	{
//		test_int(&ft_printf);
		test_double(&ft_printf);
	}
	return (0);
}
