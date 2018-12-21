#include "ft_printf.h"

int				dispatcher(char c, va_list *args, t_index *params)
{
	if (c == 'd')
		return (1);
	return (-1);
	//debug
	args=0;params=0;
}
