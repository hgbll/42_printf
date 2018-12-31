#include "ft_printf_test.h"
#include <float.h>
#include <math.h>

void		test_double(int (*f)(const char*, ...))
{
	f("%f\n", 9999999999999999999.0);
}
