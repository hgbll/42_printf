#include <ft_printf.h>
#include <stdarg.h>
#include "libft.h"

size_t				printer(const char *format,
								size_t *head,
								va_list *args,
								t_index *index)
{
	static size_t	head_old;
	size_t			printed;

	write(1, format[head_old], *head - head_old);
	printed = head - head_old + parser(format, head, args, index);
	head_old = *head + 1;
	return (printed);
}
