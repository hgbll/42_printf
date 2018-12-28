/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:15:51 by hbally            #+#    #+#             */
/*   Updated: 2018/12/22 17:05:44 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "libft.h"

static int			check_percent_char(const char *format, size_t *head)
{
	if (format[++(*head)] == '%')
	{
		ft_putchar(format[*head]);
		return (1);
	}
	return (0);
}

size_t				parser(const char *format,
							size_t *head,
							va_list *args)
{
	t_index			params;
	int				printed;

	if (check_percent_char(format, head))
		return (1);
	ft_bzero(&params, sizeof(t_index));
	params.precision = -6;
	printed = -1;
	while (format[*head])
	{
		if (!check_flag(format[*head], &params))
			if (!check_width(format, head, &params))
				if (!check_precision(format, head, &params))
					if (!check_length(format, head, &params))
						printed = dispatcher(format[*head], args, &params);
		if (printed != -1)
		{
//			printf("flags > %d\n", params.flags);
//			printf("width > %ld\n", params.width);
//			printf("precision > %ld\n", params.precision);
//			printf("\nlength > %#X\n", params.length);
			return ((size_t)printed);
		}
		(*head)++;
	}
	(*head)--;
	return (0);
}
