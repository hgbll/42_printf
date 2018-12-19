/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:54:39 by hbally            #+#    #+#             */
/*   Updated: 2018/12/19 19:47:41 by hbally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h> // remove if size_t is not used

typedef struct			s_params
{
	char				flags[5];
	char				length[5];
	t_type				types[10];
}						t_params;

typedef struct			s_type
{
	char				id;
	size_t				(*f)(const char*, va_list*, t_params*);
}						t_type;

int						printf(const char *format, ...);

#endif
