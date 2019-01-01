#include "ft_printf.h"

/*
**	Handles zero with no precision
**	Handles octal '#' flag with
**	'0' flag and width > size of output or
**	precision bigger than the amount of digits in the number
**	(i.e. never put octal 0 flag if there's a zero after it
**
*/

void		special_handler(const char *s,
							const char c,
							t_index *params)
{
	if (c != 's' && c != 'c' && c != 'f')
	{
		if (c == 'o')
		{
			if (params->flags & 0x1)
				if ((params->precision > (long long)params->size) ||
						(!(params->flags & 0x4) && params->flags & 0x2 &&
						 params->precision == -1 &&
						 width(s, c, params, 0) > 0) ||
						(params->precision != 0 && s[0] == '0'))
					params->flags -= 0x1;
		}
		if (s[0] == '0' && (c == 'x' || c == 'X') && params->flags & 0x1)
			params->flags -= 0x1;
		if (s[0] == '0' && params->precision == 0)
			params->size = 0;
	}
}
