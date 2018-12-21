#include "ft_printf.h"
#include "libft.h"

//if (char is - + sp # 0)
//	add code of char to flags
//	if (char is num and not zero)
//		add atoi of next to width, move to next non-num
//	if (char is .)
//		add atoi of next to precision, move to next non-num
//	if (char is length)
//		add to length

/*
** Flag is represented as a bit code
** ...00001 > #
** ...00010 > 0
** ...00100 > -
** ...01000 > sp
** ...10000 > +
*/

int				check_flag(const char c, t_index *params)
{
	if (c == '#')
		return (params->flags += 1);
	else if (c == '0')
		return (params->flags += 2);
	else if (c == '-')
		return (params->flags += 4);
	else if (c == ' ')
		return (params->flags += 8);
	else if (c == '+')
		return (params->flags += 16);
	else
		return (0);
}

/*
** Flag is represented as a bit code
** ...00001 > hh
** ...00010 > h
** ...01000 > ll
** ...00100 > l
** ...10000 > L
*/

int				check_length(const char *format,
								size_t *head,
								t_index *params)
{
	if (format[*head] == 'h' && format[*head + 1] == 'h')
	{
		(*head)++;
		return (params->length += 1);
	}
	else if (format[*head] == 'h')
		return (params->length += 2);
	else if (format[*head] == 'l' && format[*head + 1] == 'l')
	{
		(*head)++;
		return (params->length += 4);
	}
	else if (format[*head] == 'l')
		return (params->length += 8);
	else if (format[*head] == 'L')
		return (params->length += 16);
	else
		return (0);
}

int				check_width(const char *format,
							size_t *head,
							t_index *params)
{
	if (ft_isdigit(format[*head]))
	{
		params->width = ft_atol(&(format[*head]));
		while (ft_isdigit(format[*head + 1]))
			(*head)++;
		return (1);
	}
	return (0);
}

int				check_precision(const char *format,
								size_t *head,
								t_index *params)
{
	if (format[*head] == '.')
	{
		params->precision = ft_atol(&(format[*head + 1]));
		while (ft_isdigit(format[*head + 1]))
			(*head)++;
		return (1);
	}
	return (0);
}
