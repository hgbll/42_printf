/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:44:30 by hbally            #+#    #+#             */
/*   Updated: 2018/12/20 16:56:23 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

/*
** printf loop layout (from start to end) :
** ft_printf	| advances head until a '%' or '\0' is found
** rinter 	| prints the non-parametric part of "format" in between '%'
** parser 		| if '%' was found, parse all parameters and store in a struct
** dispatcher	| calls the function handling relevant conversion using parser output
** output baking pipe  | conversion > precision > width > flags
** arg_printer  | prints the resulting output from baking pipe and returns chars printed
					back to ft_printf
** 
*/
int				ft_printf(const char *format, ...)
{
	va_list		args;
	size_t		head;
	size_t		printed;

	printed = 0;
	if (format && *format)
	{
		va_start(args, format);
		head = 0;
		while (format[head])
		{
			if (format[head] == '%')
				printed += printer(format, &head, &args);
			head++;
		}
		printed += printer(format, &head, &args);
		va_end(args);
	}
	return (printed);
}
