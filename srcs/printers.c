/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:13:36 by hbally            #+#    #+#             */
/*   Updated: 2018/12/29 15:49:02 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h"

/*
**	Prints arguments to printf with the correct format
**	once they have been converted to char*
**
**	Pipe order :
**
**	Left align (default) :
**	width > (prefix(1)) > (int_precision) > value > (float_precision)
**
**	Right align :
**	(prefix(1)) > (int_precision) > value > (float_precision) > width
**
**	(1) : prefix applies one of ('-', '+', ' ', '0/0x/0X')
**
** Flag is represented as a bit code
** ...00001 > #
** ...00010 > 0
** ...00100 > -
** ...01000 > sp
** ...10000 > +
*/

static int			arg_prefixes(const char *s, const char c, t_index *params)
{
	int				printed;

	printed = 0;
	if (!(params->flags & 0x4) && (!(params->flags & 0x2) ||
			(c != 'f' && params->precision != -1)))
	{
		printed += width(s, c, params);
		printed += prefix(params, s, c, 1);
	}
	else
	{
		printed += prefix(params, s, c, 1);
		if (!(params->flags & 0x4))
			printed += width(s, c, params);
	}
	return (printed);
}

int					printer_arg(const char *s, const char c, t_index *params)
{
	int				printed;

	if (c != 's' && c != 'c' && c != 'f'
			&& s[0] == '0' && params->precision == 0)
		params->size = 0;
	printed = arg_prefixes(s, c, params);
	if (c != 's' && c != 'c' && c != 'f')
		printed += int_precision(params);
	if ((write(1, s, params->size) == -1))
		return (printed);
	printed += params->size;
	if (c == 'f')
		printed += float_precision(s, params);
	if (params->flags & 0x4)
		printed += width(s, c, params);
	return (printed);
}

/*
**	Prints filler chars ' ' or '0' when needed by width
**	or precision.
*/

int					printer_filler(const char c, long long len)
{
	char			*buffer;
	int				printed;
	int				previous;
	int				i;

	i = 0;
	printed = 0;
	if (!(buffer = ft_strnew(BUFFER_SIZE)))
		return (0);
	while (i < len && i < BUFFER_SIZE)
		buffer[i++] = c;
	while (len > 0)
	{
		previous = printed;
		printed += write(1, buffer, len < BUFFER_SIZE ? len : BUFFER_SIZE);
		if (printed == previous - 1)
		{
			free(buffer);
			return (printed + 1);
		}
		len -= (long long)printed;
	}
	free(buffer);
	return (printed);
}

/*
**	Prints format in between arguments.
*/

size_t				printer_fmt(const char *format,
								size_t *head,
								va_list *args)
{
	static size_t	head_old;
	size_t			printed;

	printed = *head - head_old;
	write(1, &(format[head_old]), *head - head_old);
	if (format[*head])
	{
		printed += parser(format, head, args);
		head_old = *head + 1;
	}
	else
		head_old = 0;
	return (printed);
}
