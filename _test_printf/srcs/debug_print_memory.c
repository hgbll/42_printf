#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

void		print_memory(void *p1, int nb_of_bytes)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	while (j < nb_of_bytes)
	{
		printf("%p	", (((unsigned char*)p1) + nb_of_bytes - 1  - j));
		j++;
	}
	printf("\n");
	j = 0;
	while (j < nb_of_bytes)
	{
		i = 0x80;
		while (i > 0)
		{
			printf("%d", ((int)*((unsigned char*)p1 + nb_of_bytes - 1 - j) & i) != 0);
			i /= 2;
		}
		printf("	");
		j++;
	}
	printf("\n---\n");
}

static double	get_right(double n) //assumes positive and <= LONG_MAX
{
	n -= (long long)n;
	return (n);
}

void	debug_print_memory(void)
{
	long along;
	unsigned long aulong;
	unsigned long bulong;
	int aint;
	unsigned int auint;
	double adouble;
	double bdouble;
	long double alongdouble;
	char *str;
	char c;
	unsigned char uc;
	size_t asizet;
	long *lptr;
	unsigned long *ptr;
	aulong = 0x8000000000000000ULL;
	ptr = &aulong;
	
	adouble = *((double*)(ptr));
	print_memory(&adouble, 8);
	ptr = (unsigned long *)&adouble;
	printf("%.50f\n", adouble);
}
