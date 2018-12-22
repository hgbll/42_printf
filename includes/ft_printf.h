/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:54:39 by hbally            #+#    #+#             */
/*   Updated: 2018/12/22 16:45:13 by hbally           ###   ########.fr       */
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

typedef struct		s_index
{
	char			type;
	int				length;
	long			precision;
	long			width;
	int				flags;
	int				negative;
}					t_index;

int					printf(const char *format, ...);
size_t				printer(const char *format, size_t *head, va_list *args);
size_t				parser(const char *format, size_t *head, va_list *args);
int					dispatcher(char c, va_list *args, t_index *params);

int					baker_char(char c, t_index *params);
int					baker_string(char *s, t_index *params);
int					baker_pointer(void* n, t_index *params);
int					baker_int(int n, t_index *params);
int					baker_long(long n, t_index *params);
int					baker_longlong(long long n, t_index *params);
int					baker_double(double n, t_index *params);
int					baker_longdouble(long double n, t_index *params);

int					check_flag(const char c, t_index *params);
int					check_length(const char *format,
									size_t *head,
									t_index *params);
int					check_width(const char *format,
									size_t *head,
									t_index *params);
int					check_precision(const char *format,
									size_t *head,
									t_index *params);

#endif
