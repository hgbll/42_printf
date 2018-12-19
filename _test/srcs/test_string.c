/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 15:58:36 by hbally            #+#    #+#             */
/*   Updated: 2018/12/19 16:56:18 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_test.h"

void		test_string(void)
{
	char	*s = "loremipsum";
	int		ret;

	printf("___STRINGS___\n");
	ret = printf("%s\n", s);
	printf("%d\n", ret);
//	ret = ft_printf("%s\n", s);
//	printf("%d\n", ret);
	printf("%s%s%s%s%s%s      %s annnnnnnd %s\n", s, s, s, s, s, s, s, s);
	//ft_printf("%s%s%s%s%s%s      %s annnnnnnd %s\n", s);
	ret = printf("%");
	printf("%d\n", ret);
	//ret = ft_printf("%");
//	printf("%d\n", ret);
	printf("%s and %\n", s);
//	ft_printf("%s and %\n", s);
//	printf("%9999999999999999999s", s); // doesnt print width
//	ft_printf("%9999999999999999999s", s); // doesnt print width
//	printf("%99999999999999999s", s); // prints width
//	ft_printf("%99999999999999999s", s); // prints width
//	printf("%0s", s);
//	ft_printf("%0s", s);
//	printf("%#s", s);
//	ft_printf("%#s", s);
}
