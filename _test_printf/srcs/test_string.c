/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 15:58:36 by hbally            #+#    #+#             */
/*   Updated: 2018/12/29 15:51:46 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_test.h"

void		test_string(void)
{
	char	c = 'C';
	char	*s = "loremipsumloremipsumloremipsumloremipsumloremipsumloremipsum";
	char	*s1 = "James";
	char	*s2 = "Bond";
	char 	*short_string = "lorem\n";
	int		ret;

	printf("___STRINGS___\n");

	printf("%03402s\n", s);
	ret = printf("%s\n", s);
	printf("%d\n", ret);
	ret = ft_printf("%s\n", s);
	printf("%d\n", ret);

	ft_printf("My name is %s. %s %s.\n", s2, s1, s2);
	ft_printf("%.s%.s", s2, s1);
	printf("char \\0 %cshould not appear\n", '\0');
	ft_printf("char \\0 %cshould not appear\n", '\0');
	ft_printf("char %c\n", c);
	printf("____________\n", c);

	printf("char %10c\n", c);

	printf("char %10.10c\n", c);

	printf("char %-10.10c\n", c);

	printf("char %+10c\n", c);

	printf("char %+10c\n", c);

	printf("%s\n", s);
	ft_printf("%s\n", s);
	printf("____________\n", c);

	printf("%.0s\n", s);
	printf("%.6s\n", s);
	printf("%.99999999s\n", s);
	printf("%s\n", short_string);
	printf("%50s\n", NULL);
	ft_printf("%50s\n", NULL);

	printf("%.2c", NULL);
	
	
//	ret = ft_printf("char %c\n", c);
//	printf("%d\n---\n", ret);
//	ret = ft_printf("char %odfsdhsajcfilukha\n", c);
//	printf("%d\n---\n", ret);

//	printf("\n%d\n---\n", ret);
//	ret = ft_printf("0123456789");
//	printf("\n%d\n---\n", ret);


//	ret = printf("%s%s%s%s%s%s      %s annnnnnnd %s\n", s, s, s, s, s, s, s, s);
//	printf("%d\n", ret);
	//ret = ft_printf("%s%s%s%s%s%s      %s annnnnnnd %s\n", s);
//	printf("%d\n", ret);

//	ret = printf("%s and %\n", s);
//	printf("%d\n", ret);
//	ret = ft_printf("%s and %\n", s);
//	printf("%d\n", ret);

//	printf("%9999999999999999999s", s); // doesnt print width
//	ft_printf("%9999999999999999999s", s); // doesnt print width

//	printf("%99999999999999999s", s); // prints width
//	ft_printf("%99999999999999999s", s); // prints width

//	printf("%0s", s);
//	ft_printf("%0s", s);

//	printf("%#s", s);
//	ft_printf("%#s", s);
}
