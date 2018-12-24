#include <unistd.h>
#include "ft_printf.h"

/*
**	Pipe order :
**
**	Left align (default) :
**	width > (prefix(1)) > (int_precision) > value > (float_precision)
**
**	Right align :
**	(prefix(1)) > (int_precision) > value > (float_precision) > width
**
**	(1) : prefix applies one of ('-', '+', ' ', '0/0x/0X')
*/

int					formatter(char *s, t_index *params)
{
	int				printed;

	if (!(flags & 0x4))
		printed += width();
	printed += prefix();
	if (c == 'd' || c == 'i' || c == 'o' || c == 'x' || c == 'X' || c == 'u')
		printed += int_precision()
	if ((write(1, s, params->size) == -1))
		return (printed);
	printed += params->size;
	if (c == 'f')
		printed += float_precision();
	if (flags & 0x4)
		printed += width();
	free(s);
	return (printed);
}
