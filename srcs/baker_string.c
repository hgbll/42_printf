/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baker_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 14:57:20 by hbally            #+#    #+#             */
/*   Updated: 2018/12/29 14:58:00 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int				baker_string(char *s, t_index *params)
{
	if (s)
	{
		params->size = ft_strlen(s);
		if (params->precision != -1 &&
				params->precision < (long long)params->size)
			params->size = params->precision;
		return (printer_arg(s, params->type, params));
	}
	ft_putstr("(null)");
	return (6);
}
