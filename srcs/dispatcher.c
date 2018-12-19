/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:35:41 by hbally            #+#    #+#             */
/*   Updated: 2018/12/19 19:25:15 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <string.h>
#include "ft_printf.h"

size_t				dispatcher(const char *format,
								size_t *head,
								va_list args,
								t_params *params)
{
	static size_t	head_old;
	size_t			printed;

	return (printed)
}
