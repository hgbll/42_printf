/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:08:42 by hbally            #+#    #+#             */
/*   Updated: 2018/12/29 15:26:01 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_test.h"

void		test_int(void)
{
	printf("___INT___\n");

	ft_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	printf("___\n");

	ft_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);
	printf("___\n");

	ft_printf("%ld\n", LONG_MIN);
	printf("%ld\n", LONG_MIN);
	printf("___\n");

	ft_printf("%ld\n", LONG_MAX);
	printf("%ld\n", LONG_MAX);
	printf("___\n");

	ft_printf("%lld\n", LLONG_MAX);
	printf("%lld\n", LLONG_MAX);
	printf("___\n");

	ft_printf("%lld\n", LLONG_MIN);
	printf("%lld\n", LLONG_MIN);
	printf("___\n");

	ft_printf("%u\n", UINT_MAX);
	printf("%u\n", UINT_MAX);
	printf("___\n");

	ft_printf("%lu\n", ULONG_MAX);
	printf("%lu\n", ULONG_MAX);
	printf("___\n");

	ft_printf("%llu\n", ULLONG_MAX);
	printf("%llu\n", ULLONG_MAX);
	printf("___\n");

	ft_printf("%X\n", UINT_MAX);
	printf("%X\n", UINT_MAX);
	printf("___\n");

	ft_printf("%lX\n", ULONG_MAX);
	printf("%lX\n", ULONG_MAX);
	printf("___\n");

	ft_printf("%llX\n", ULLONG_MAX);
	printf("%llX\n", ULLONG_MAX);
	printf("___\n");

	ft_printf("%o\n", UINT_MAX);
	printf("%o\n", UINT_MAX);
	printf("___\n");

	ft_printf("%lo\n", ULONG_MAX);
	printf("%lo\n", ULONG_MAX);
	printf("___\n");

	ft_printf("%llo\n", ULLONG_MAX);
	printf("%llo\n", ULLONG_MAX);
	printf("___\n");

	exit(0);

	printf("%#o\n", 32448);
	printf("%10.10d\n", -123);
	printf("%11.10d\n", -123);
	printf("%30.10d\n", -123);

	printf("%0 20x\n", +500);

	printf("%u\n");
//	printf("%99999999999999999ld\n", along);
	printf("%#ld\n", along);
	printf("%.15d\n", a);

	//ret = ft_printf("lorem %% ipsum %-ld");
	//printf("\n%d\n", ret);
//	long long alonglong;
//	alonglong = LONG_MAX;
//	printf ("test : %hhlld", alonglong);
//	ret = printf("%d\n", a);
//	printf("%d\n", ret);

//	ret = ft_printf("%d", a);
//	printf("%d\n", ret);

//	printf("%.6#50f", (double)a);
}
