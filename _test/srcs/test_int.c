/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:08:42 by hbally            #+#    #+#             */
/*   Updated: 2018/12/29 16:12:21 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_test.h"

void		test_int(void)
{
	int a;

	printf("___PTR___\n");
	printf("%0100.50p\n", &a);
	ft_printf("%p\n", &a);
//	printf("%050llx\n", &a);
	printf("%+050.100d\n", 42334820);
	printf("%+050f\n", 430.8034);
	printf("%d\n", sizeof(&a));

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

	printf("%+d\n", 8439209);
	ft_printf("%+d\n", 8439209);

	ft_printf("%+d\n", 8439209);

	printf("%+d\n", -8439209);
	ft_printf("%+d\n", -8439209);
	
	printf("%d\n", -8439209);
	ft_printf("%d\n", -8439209);

	printf("% d\n", 8439209);
	ft_printf("% d\n", 8439209);

	printf("%# x\n", -8439209);
	ft_printf("%# x\n", -8439209);

	printf("%.60p\n", &a);
	ft_printf("%.60p\n", &a);

	printf("%#X\n", -8439209);
	ft_printf("%#X\n", -8439209);

	printf("%+060.50d\n", 150);
	ft_printf("%+060.50d\n", 150);

	printf("%+060.50d\n", 150);
	ft_printf("%+060.50d\n", 150);

	printf("%+060d\n", 150);
	ft_printf("%+060d\n", 150);

	printf("%+060.50f\n", 150.0);
	ft_printf("%+060.50f\n", 150.0);

	printf("%060.50s\n", "hello");
	ft_printf("%060.50s\n", "hello");

	printf("%060.50c\n", 'h');
	ft_printf("%060.50c\n", 'h');

	printf("%d\n", printf("%#+095.34f\n", -150.438));
	printf("%d\n", ft_printf("%#+095.34f\n", -150.438));

	printf("%#.x", 0);
}
