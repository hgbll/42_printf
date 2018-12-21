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
	char				type;
	int					length;
	long				precision;
	long				width;
	int					flags;
}						t_index;

int						printf(const char *format, ...);
size_t					printer(const char *format,
								size_t *head,
								va_list *args);
size_t					parser(const char *format,
								size_t *head,
								va_list *args);
int						dispatcher(char c, va_list *args, t_index *params);

int						check_flag(const char c, t_index *params);
int						check_length(const char *format,
										size_t *head,
										t_index *params);
int						check_width(const char *format,
									size_t *head,
									t_index *params);
int						check_precision(const char *format,
										size_t *head,
										t_index *params);

#endif
