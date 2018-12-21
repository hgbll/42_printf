/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:08:42 by hbally            #+#    #+#             */
/*   Updated: 2018/12/20 17:45:27 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_test.h"

void		test_int(void)
{
	int a;
	int b;
	int ret;

	a = INT_MAX;
	b = INT_MIN;

	printf("___INT___\n");
	
	long long alonglong;
	alonglong = LONG_MAX;
	printf ("test : %hhlld", alonglong);
	ret = printf("%d\n", a);
	printf("%d\n", ret);

	//ret = ft_printf("%d", a);
	//printf("%d\n", ret);

	printf("%.6#50f", (double)a);
}
