/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baker_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 14:56:23 by hbally            #+#    #+#             */
/*   Updated: 2018/12/29 16:02:06 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h"

int				baker_pointer(void *p, t_index *params)
{
	if (!p)
		return (0);
	params->type = 'x';
	params->flags |= 0x1;
	if (sizeof(p) == 8)
	{
		params->length |= 0x4;
		return (baker_longlong((unsigned long long)p, params));
	}
	return (baker_int((unsigned int)p, params));
}
