#include "ft_printf_test.h"

void			test_real(void)
{
	float afloat;
	double adouble;
	
	afloat = 0.4999999;
	adouble = 0.4999999;
	printf("value : \t0.4999999\n");
	printf(".\t\t%.f\n", afloat);
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", afloat);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", afloat);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", afloat);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");
	afloat = 1.5555554;
	adouble = 1.5555554;
	printf("value : \t1.5555554\n");
	printf(".\t\t%.f\n", afloat);
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", afloat);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", afloat);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", afloat);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");
	afloat = 0.9999999;
	adouble = 0.9999999;
	printf("value : \t0.9999999\n");
	printf(".\t\t%.f\n", afloat);
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", afloat);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", afloat);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", afloat);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");
	afloat = 0.9000000;
	adouble = 0.9000000;
	printf("value : \t0.9000000\n");
	printf(".\t\t%.f\n", afloat);
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", afloat);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", afloat);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", afloat);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");
	afloat = 0.4111111;
	adouble = 0.4111111;
	printf("value : 0.4111111\t\n");
	printf(".\t\t%.f\n", afloat);
	printf(".\t\t%.f\n", adouble);
	printf(".1\t\t%.1f\n", afloat);
	printf(".1\t\t%.1f\n", adouble);
	printf(".2\t\t%.2f\n", afloat);
	printf(".2\t\t%.2f\n", adouble);
	printf("5.2\t\t%5.2f\n", afloat);
	printf("5.2\t\t%5.2f\n", adouble);
	printf("___________\n");
}
