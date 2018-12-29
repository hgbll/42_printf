#include "ft_printf_test.h"
#include <float.h>

void			test_real(void)
{
	double adouble;
	
	printf("___REAL___\n");
	adouble = 3.493;
	printf("[1] %-300.100f\n", adouble);
	printf("[2] %#.f\n", adouble);
	printf("[3] %#.0f\n", adouble);
	printf("[4] %.100f\n", adouble);
	printf("[5] %.2f\n", adouble);
	printf("[6] %5.2f\n", adouble);
	printf("___________\n");
	adouble = 3.96:0000;
	printf("[1] %-300.100f\n", adouble);
	printf("[2] %#.f\n", adouble);
	printf("[3] %#.0f\n", adouble);
	printf("[4] %.100f\n", adouble);
	printf("[5] %.2f\n", adouble);
	printf("[6] %5.2f\n", adouble);
	printf("___________\n");
}
