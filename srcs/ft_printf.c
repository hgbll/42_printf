/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:44:30 by hbally            #+#    #+#             */
/*   Updated: 2018/12/19 19:26:14 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

int				ft_printf(const char *format, ...)
{
//	va_list		args;
//	t_params	params;
//	size_t		head;
//	size_t		printed;
//
//	printed = 0;
//	ft_bzero(&params, sizeof(t_params));
//	if (format && *format)
//	{
//		va_start(args, format);
//		params_init(&params);
//		head = 0;
//		while (format[head])
//		{
//			if (format[head] == '%' || !format[head + 1])
//				printed += dispatcher(&format, &head, args, &params);
//			head++;
//		}
//		va_end(args);
//	}
//	return (printed);
//	//debug
//	format = 0;
}
