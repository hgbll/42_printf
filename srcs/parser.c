#include <stdarg.h>
#include "ft_printf.h"

size_t				parser(const char *format,
						size_t *head,
							va_list *args,
							t_index *index)
{

	if (char is - + sp # 0)
		add code of char to flags
	if (char is num and not zero)
		add atoi of next to width, move to next non-num
	if (char is .)
		add atoi of next to precision, move to next non-num











	if (!format[*head + 1])

		write(1, &(format[*head], 1));

	else if (format[*head + 1] == '%')

		write(1, &(format[(*head)++], 1));
}
