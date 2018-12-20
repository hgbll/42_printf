/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:54:39 by hbally            #+#    #+#             */
/*   Updated: 2018/12/20 17:31:02 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>



/*
** DEBUG FUNCTIONS TODO REMOVE
*/

#include <stdio.h>
#include <limits.h>
/*
** ---------------------------
*/

typedef struct			s_index
{
	unsigned char		flags;
	int					width; // check if > 0

}						t_index;





int						printf(const char *format, ...);
size_t					printer(const char *format,
								size_t *head,
								va_list *args);
size_t					parser(const char *format,
								size_t *head,
								va_list *args);

#endif
