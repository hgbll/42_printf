#include <unistd.h>
#include "ft_printf.h"
#include "libft.h"

int					filler(char c, long long len)
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
