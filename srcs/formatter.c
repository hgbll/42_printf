#include <unistd.h>
#include "ft_printf.h"

int					print_char(char c, long long len)
{
	char			*buffer;
	int				printed;
	int				previous;
	int				i;

	i = 0;
	printed = 0;
	if (!(buffer = ft_strnew(BUFFER_SIZE)))
		return (0);
	while (i < len && i < BUFFER_SIZE)
		buffer[i++] = c;
	while (len > 0)
	{
		previous = printed;
		printed += write(1, buffer, len < BUFFER_SIZE ? len : BUFFER_SIZE);
		if (printed == previous - 1)
		{
			free(buffer);
			return (printed + 1);
		}
		len -= (long long)printed;
	}
	free(buffer);
	return (printed);
}

int					apply_precision(char *s, t_index *params)
{
	if (params.type == 's' && params.precision != -1)
		params.size = params.precision;
	if (params.type != 'c' && params.type != 'f')
	{
	if (params->size < params.precision)
	}
}
int					formatter(char *s, t_index *params)
{
	if (apply_precision(s, params) &&
		apply_flags(s, params))
		apply_width(s, params) &&
	{
		write(1, s, params->size);
		free(s);
		return (param->size);
	}
	return (0);
}
