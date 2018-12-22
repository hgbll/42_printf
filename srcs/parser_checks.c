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
** ...00001 > # (1)
** ...00010 > 0 (2)
** ...00100 > - (4)
** ...01000 > sp (8)
** ...10000 > + (16)
*/

int				check_flag(const char c, t_index *params)
{
	if (c == '#')
		return (params->flags |= 1);
	if (c == '0')
		return (params->flags |= 2);
	if (c == '-')
		return (params->flags |= 4);
	if (c == ' ')
		return (params->flags |= 8);
	if (c == '+')
		return (params->flags |= 16);
	return (0);
}

/*
** Flag is represented as a bit code
** ...00001 > hh (1)
** ...00010 > h (2)
** ...00100 > ll (4)
** ...01000 > l (8)
** ...10000 > L (16)
*/

int				check_length(const char *format,
								size_t *head,
								t_index *params)
{
	if (format[*head] == 'h' && format[*head + 1] == 'h')
	{
		(*head)++;
		return (params->length |= 1);
	}
	if (format[*head] == 'h')
		return (params->length |= 2);
	if (format[*head] == 'l' && format[*head + 1] == 'l')
	{
		(*head)++;
		return (params->length |= 4);
	}
	if (format[*head] == 'l')
		return (params->length |= 8);
	if (format[*head] == 'L')
		return (params->length |= 16);
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
		if (ft_isdigit(format[*head + 1]))
		{
			params->precision = ft_atol(&(format[*head + 1]));
			while (ft_isdigit(format[*head + 1]))
				(*head)++;
		}
		else
			params->precision = 0;
		return (1);
	}
	return (0);
}
