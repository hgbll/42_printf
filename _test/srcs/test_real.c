#include "ft_printf_test.h"
#include <float.h>

void			test_real(void)
{
	double adouble;
	
	printf("___REAL___\n");
	adouble = 5.98403854890329492840890329412346823468192364918236419283476123846128364;
	printf(".\t\t%.f\n", adouble);
	printf(".100\t\t%.100f\n", adouble);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");

	adouble = 5243905.984038548;
	printf("value : 5243905.984038548\t\n");
	printf("#.\t\t%#.f\n", adouble);
	printf("#.99\t\t%#.99f\n", adouble);
	printf("#.2\t\t%#.2f\n", adouble);
	printf("#5.2\t\t%#5.2f\n", adouble);
	printf("___________\n");

	adouble = 0.4999999;
	printf("value : \t0.4999999\n");
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");

	adouble = 1.5555554;
	printf("value : \t1.5555554\n");
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");

	adouble = 0.9999999;
	printf("value : \t0.9999999\n");
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");

	adouble = 0.9000000;
	printf("value : \t0.9000000\n");
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");

	adouble = 0.4111111;
	printf("value : 0.4111111\t\n");
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");
}
