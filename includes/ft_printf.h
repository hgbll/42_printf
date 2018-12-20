/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:54:39 by hbally            #+#    #+#             */
/*   Updated: 2018/12/20 16:11:14 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h> // remove if size_t is not used

typedef struct			s_index
{
	char				flags[5];
}						t_index;

//typedef struct			s_type
//{
//	char				id;
//	size_t				(*f)(const char*, va_list*, t_params*);
//}						t_type;
//

/*
** DEBUG FUNCTIONS TODO REMOVE
*/

#include <stdio.h>
#include <limits.h>
/*
** ---------------------------
*/

int						printf(const char *format, ...);
size_t					printer(const char *format,
								size_t *head,
								va_list *args,
								t_index *index);
size_t					parser(const char *format,
								size_t *head,
								va_list *args,
								t_index *index);

#endif
