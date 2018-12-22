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

int				baker_int(int n, t_index *params);
int				baker_long(long n, t_index *params);
int				baker_longlong(long long n, t_index *params);
int				baker_pointer(void* n, t_index *params);
