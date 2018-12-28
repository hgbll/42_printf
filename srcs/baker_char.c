/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baker_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 15:19:18 by hbally            #+#    #+#             */
/*   Updated: 2018/12/22 17:50:52 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h"

int				baker_char(char c, t_index *params)
{
	if (c)
	{
		params->size = 1;
		return (printer_arg(&c, params->type, params));
	}
	return (0);
}

int				baker_string(char *s, t_index *params)
{
	if (s)
	{
		if (params->precision != -6)
			params->size = params->precision;
		else
			params->size = ft_strlen(s);
		return (printer_arg(s, params->type, params));
	}
	return (0);
}
