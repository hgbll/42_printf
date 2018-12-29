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
		if (params->precision != -6)
			params->size = params->precision;
		else
			params->size = ft_strlen(s);
		return (printer_arg(s, params->type, params));
	}
	return (0);
}
