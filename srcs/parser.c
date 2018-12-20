/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:15:51 by hbally            #+#    #+#             */
/*   Updated: 2018/12/20 15:54:19 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

size_t				parser(const char *format,
						size_t *head,
							va_list *args,
							t_index *index)
{
//	if (char is - + sp # 0)
//		add code of char to flags
//	if (char is num and not zero)
//		add atoi of next to width, move to next non-num
//	if (char is .)
//		add atoi of next to precision, move to next non-num
//	if (char is length)
//		add to length
//	if (char is type)
//		add to type
	return (0);
	//debug
	format = 0;head =0;args=0, index=0;
}
