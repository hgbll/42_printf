/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:08:42 by hbally            #+#    #+#             */
/*   Updated: 2018/12/22 17:19:31 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_test.h"

void		test_int(void)
{
	int a = INT_MAX;
	int b = INT_MIN;
	long along = LONG_MAX;
	long blong = LONG_MIN;
	int ret;

	printf("___INT___\n");

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
