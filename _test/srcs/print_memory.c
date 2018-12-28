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

void	debug_printmemory(void)
{
	long along;
	unsigned long aulong;
	int aint;
	unsigned int auint;
	double adouble;
	double bdouble;
	long double alongdouble;
	char *str;
	char c;
	unsigned char uc;
	size_t asizet;
	
	c = -128;
//	uc = ~c + 1;
	uc = c * -1;
	print_memory(&c, 1);
	print_memory(&uc, 1);

	aint = INT_MIN - 1;
	auint = aint;
	print_memory(&aint, 4);
	print_memory(&auint, 4);
	printf("%d\n", aint);
	printf("%u\n", auint);
	printf(".........\n");
	printf("%d\n", c);
	printf("%u\n", uc);
	aint = 1200;
	print_memory(&aint, 4);
	aint = (char)aint;
	print_memory(&aint, 4);
	printf("%d\n", aint);
	uc = 130;
	printf("%x", -50);

}
