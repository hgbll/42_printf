/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baker_integers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 15:17:03 by hbally            #+#    #+#             */
/*   Updated: 2018/12/22 15:45:13 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int				baker_int(int n, t_index *params);
{
	char		*result;
	int			printed;

	if (n < 0)
		params->negative = 1;
	if ((result = ft_ltoa(n >= 0 ? (long)n : -((long)n))))
	{
		params->size = ft_strlen(result);
		printed = printer_arg(result, params->type, params);
		free(result);
		return (printed);
	}
	return (0);
}

int				baker_long(long n, t_index *params);
int				baker_longlong(long long n, t_index *params);
int				baker_pointer(void* n, t_index *params);
