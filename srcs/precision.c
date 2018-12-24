#include "ft_printf.h"

// check for default precision values
int					float_precision(char *s, t_index *params)
{
}

int					int_precision(char *s, t_index *params)
{
	if (params->size < (size_t)params->precision)
		return (filler('0', params->precision - params->size);
}
