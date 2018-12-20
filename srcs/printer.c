/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:13:36 by hbally            #+#    #+#             */
/*   Updated: 2018/12/20 16:43:40 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"
#include "libft.h"

size_t				printer(const char *format,
								size_t *head,
								va_list *args,
								t_index *index)
{
	static size_t	head_old;
	size_t			printed;

	printed = *head - head_old;
	write(1, &(format[head_old]), *head - head_old);
	if (format[*head])
	{
		printed += parser(format, head, args, index) - 1;
		head_old = *head + 1;
	}
	else
		head_old = 0;
	return (printed);
}
