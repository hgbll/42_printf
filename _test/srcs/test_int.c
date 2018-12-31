#include "ft_printf_test.h"

void		test_int(int (*f)(const char*, ...))
{
	//BASIC

	loop_int(f, "%d\n", 0, INT_MAX, 10000llu);
	loop_int(f, "%d\n", 0, INT_MIN, 10000llu);
	loop_int(f, "%d\n", INT_MAX, 0, 10000llu);
	loop_int(f, "%d\n", INT_MIN, 0, 10000llu);

	loop_long(f, "%d\n", 0, LONG_MAX, 10000llu);
	loop_long(f, "%d\n", 0, LONG_MIN, 10000llu);
	loop_long(f, "%d\n", LONG_MAX, 0, 10000llu);
	loop_long(f, "%d\n", LONG_MIN, 0, 10000llu);

	loop_llong(f, "%d\n", 0, LLONG_MAX, 10000llu);
	loop_llong(f, "%d\n", 0, LLONG_MIN, 10000llu);
	loop_llong(f, "%d\n", LLONG_MAX, 0, 10000llu);
	loop_llong(f, "%d\n", LLONG_MIN, 0, 10000llu);

	loop_uint(f, "%d\n", 0, UINT_MAX, 10000llu);
	loop_uint(f, "%d\n", UINT_MAX, 0, 10000llu);

	loop_ulong(f, "%d\n", 0, ULONG_MAX, 10000llu);
	loop_ulong(f, "%d\n", ULONG_MAX, 0, 10000llu);

	loop_ullong(f, "%d\n", 0, ULLONG_MAX, 10000llu);
	loop_ullong(f, "%d\n", ULLONG_MAX, 0, 10000llu);

	loop_int(f, "%x\n", 0, INT_MAX, 10000llu);
	loop_int(f, "%x\n", 0, INT_MIN, 10000llu);
	loop_int(f, "%x\n", INT_MAX, 0, 10000llu);
	loop_int(f, "%x\n", INT_MIN, 0, 10000llu);

	loop_long(f, "%x\n", 0, LONG_MAX, 10000llu);
	loop_long(f, "%x\n", 0, LONG_MIN, 10000llu);
	loop_long(f, "%x\n", LONG_MAX, 0, 10000llu);
	loop_long(f, "%x\n", LONG_MIN, 0, 10000llu);

	loop_llong(f, "%x\n", 0, LLONG_MAX, 10000llu);
	loop_llong(f, "%x\n", 0, LLONG_MIN, 10000llu);
	loop_llong(f, "%x\n", LLONG_MAX, 0, 10000llu);
	loop_llong(f, "%x\n", LLONG_MIN, 0, 10000llu);

	loop_uint(f, "%x\n", 0, UINT_MAX, 10000llu);
	loop_uint(f, "%x\n", UINT_MAX, 0, 10000llu);

	loop_ulong(f, "%x\n", 0, ULONG_MAX, 10000llu);
	loop_ulong(f, "%x\n", ULONG_MAX, 0, 10000llu);

	loop_ullong(f, "%x\n", 0, ULLONG_MAX, 10000llu);
	loop_ullong(f, "%x\n", ULLONG_MAX, 0, 10000llu);

	loop_int(f, "%X\n", 0, INT_MAX, 10000llu);
	loop_int(f, "%X\n", 0, INT_MIN, 10000llu);
	loop_int(f, "%X\n", INT_MAX, 0, 10000llu);
	loop_int(f, "%X\n", INT_MIN, 0, 10000llu);

	loop_long(f, "%X\n", 0, LONG_MAX, 10000llu);
	loop_long(f, "%X\n", 0, LONG_MIN, 10000llu);
	loop_long(f, "%X\n", LONG_MAX, 0, 10000llu);
	loop_long(f, "%X\n", LONG_MIN, 0, 10000llu);

	loop_llong(f, "%X\n", 0, LLONG_MAX, 10000llu);
	loop_llong(f, "%X\n", 0, LLONG_MIN, 10000llu);
	loop_llong(f, "%X\n", LLONG_MAX, 0, 10000llu);
	loop_llong(f, "%X\n", LLONG_MIN, 0, 10000llu);

	loop_uint(f, "%X\n", 0, UINT_MAX, 10000llu);
	loop_uint(f, "%X\n", UINT_MAX, 0, 10000llu);

	loop_ulong(f, "%X\n", 0, ULONG_MAX, 10000llu);
	loop_ulong(f, "%X\n", ULONG_MAX, 0, 10000llu);

	loop_ullong(f, "%X\n", 0, ULLONG_MAX, 10000llu);
	loop_ullong(f, "%X\n", ULLONG_MAX, 0, 10000llu);

	loop_int(f, "%o\n", 0, INT_MAX, 10000llu);
	loop_int(f, "%o\n", 0, INT_MIN, 10000llu);
	loop_int(f, "%o\n", INT_MAX, 0, 10000llu);
	loop_int(f, "%o\n", INT_MIN, 0, 10000llu);

	loop_long(f, "%o\n", 0, LONG_MAX, 10000llu);
	loop_long(f, "%o\n", 0, LONG_MIN, 10000llu);
	loop_long(f, "%o\n", LONG_MAX, 0, 10000llu);
	loop_long(f, "%o\n", LONG_MIN, 0, 10000llu);

	loop_llong(f, "%o\n", 0, LLONG_MAX, 10000llu);
	loop_llong(f, "%o\n", 0, LLONG_MIN, 10000llu);
	loop_llong(f, "%o\n", LLONG_MAX, 0, 10000llu);
	loop_llong(f, "%o\n", LLONG_MIN, 0, 10000llu);

	loop_uint(f, "%o\n", 0, UINT_MAX, 10000llu);
	loop_uint(f, "%o\n", UINT_MAX, 0, 10000llu);

	loop_ulong(f, "%o\n", 0, ULONG_MAX, 10000llu);
	loop_ulong(f, "%o\n", ULONG_MAX, 0, 10000llu);

	loop_ullong(f, "%o\n", 0, ULLONG_MAX, 10000llu);
	loop_ullong(f, "%o\n", ULLONG_MAX, 0, 10000llu);

	//WIDTH
	loop_int(f, "%100d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%100d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%100d\n", INT_MAX, 0, 1000llu);
	loop_int(f, "%100d\n", INT_MIN, 0, 1000llu);

	loop_long(f, "%100d\n", 0, LONG_MAX, 1000llu);
	loop_long(f, "%100d\n", 0, LONG_MIN, 1000llu);
	loop_long(f, "%100d\n", LONG_MAX, 0, 1000llu);
	loop_long(f, "%100d\n", LONG_MIN, 0, 1000llu);

	loop_llong(f, "%100d\n", 0, LLONG_MAX, 1000llu);
	loop_llong(f, "%100d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%100d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%100d\n", LLONG_MIN, 0, 1000llu);

	loop_uint(f, "%100d\n", 0, UINT_MAX, 1000llu);
	loop_uint(f, "%100d\n", UINT_MAX, 0, 1000llu);

	loop_ulong(f, "%100d\n", 0, ULONG_MAX, 1000llu);
	loop_ulong(f, "%100d\n", ULONG_MAX, 0, 1000llu);

	loop_ullong(f, "%100d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%100d\n", ULLONG_MAX, 0, 1000llu);

	loop_int(f, "%100x\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%100x\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%100x\n", INT_MAX, 0, 1000llu);
	loop_int(f, "%100x\n", INT_MIN, 0, 1000llu);

	loop_long(f, "%100x\n", 0, LONG_MAX, 1000llu);
	loop_long(f, "%100x\n", 0, LONG_MIN, 1000llu);
	loop_long(f, "%100x\n", LONG_MAX, 0, 1000llu);
	loop_long(f, "%100x\n", LONG_MIN, 0, 1000llu);

	loop_llong(f, "%100x\n", 0, LLONG_MAX, 1000llu);
	loop_llong(f, "%100x\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%100x\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%100x\n", LLONG_MIN, 0, 1000llu);

	loop_uint(f, "%100x\n", 0, UINT_MAX, 1000llu);
	loop_uint(f, "%100x\n", UINT_MAX, 0, 1000llu);

	loop_ulong(f, "%100x\n", 0, ULONG_MAX, 1000llu);
	loop_ulong(f, "%100x\n", ULONG_MAX, 0, 1000llu);

	loop_ullong(f, "%100x\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%100x\n", ULLONG_MAX, 0, 1000llu);

	loop_int(f, "%100X\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%100X\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%100X\n", INT_MAX, 0, 1000llu);
	loop_int(f, "%100X\n", INT_MIN, 0, 1000llu);

	loop_long(f, "%100X\n", 0, LONG_MAX, 1000llu);
	loop_long(f, "%100X\n", 0, LONG_MIN, 1000llu);
	loop_long(f, "%100X\n", LONG_MAX, 0, 1000llu);
	loop_long(f, "%100X\n", LONG_MIN, 0, 1000llu);

	loop_llong(f, "%100X\n", 0, LLONG_MAX, 1000llu);
	loop_llong(f, "%100X\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%100X\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%100X\n", LLONG_MIN, 0, 1000llu);

	loop_uint(f, "%100X\n", 0, UINT_MAX, 1000llu);
	loop_uint(f, "%100X\n", UINT_MAX, 0, 1000llu);

	loop_ulong(f, "%100X\n", 0, ULONG_MAX, 1000llu);
	loop_ulong(f, "%100X\n", ULONG_MAX, 0, 1000llu);

	loop_ullong(f, "%100X\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%100X\n", ULLONG_MAX, 0, 1000llu);

	loop_int(f, "%100o\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%100o\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%100o\n", INT_MAX, 0, 1000llu);
	loop_int(f, "%100o\n", INT_MIN, 0, 1000llu);

	loop_long(f, "%100o\n", 0, LONG_MAX, 1000llu);
	loop_long(f, "%100o\n", 0, LONG_MIN, 1000llu);
	loop_long(f, "%100o\n", LONG_MAX, 0, 1000llu);
	loop_long(f, "%100o\n", LONG_MIN, 0, 1000llu);

	loop_llong(f, "%100o\n", 0, LLONG_MAX, 1000llu);
	loop_llong(f, "%100o\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%100o\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%100o\n", LLONG_MIN, 0, 1000llu);

	loop_uint(f, "%100o\n", 0, UINT_MAX, 1000llu);
	loop_uint(f, "%100o\n", UINT_MAX, 0, 1000llu);

	loop_ulong(f, "%100o\n", 0, ULONG_MAX, 1000llu);
	loop_ulong(f, "%100o\n", ULONG_MAX, 0, 1000llu);

	loop_ullong(f, "%100o\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%100o\n", ULLONG_MAX, 0, 1000llu);

	//PRECISION
	loop_int(f, "%.50d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%.50d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%.50d\n", INT_MAX, 0, 1000llu);
	loop_int(f, "%.50d\n", INT_MIN, 0, 1000llu);

	loop_long(f, "%.50d\n", 0, LONG_MAX, 1000llu);
	loop_long(f, "%.50d\n", 0, LONG_MIN, 1000llu);
	loop_long(f, "%.50d\n", LONG_MAX, 0, 1000llu);
	loop_long(f, "%.50d\n", LONG_MIN, 0, 1000llu);

	loop_llong(f, "%.50d\n", 0, LLONG_MAX, 1000llu);
	loop_llong(f, "%.50d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%.50d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%.50d\n", LLONG_MIN, 0, 1000llu);

	loop_uint(f, "%.50d\n", 0, UINT_MAX, 1000llu);
	loop_uint(f, "%.50d\n", UINT_MAX, 0, 1000llu);

	loop_ulong(f, "%.50d\n", 0, ULONG_MAX, 1000llu);
	loop_ulong(f, "%.50d\n", ULONG_MAX, 0, 1000llu);

	loop_ullong(f, "%.50d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_int(f, "%.50x\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%.50x\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%.50x\n", INT_MAX, 0, 1000llu);
	loop_int(f, "%.50x\n", INT_MIN, 0, 1000llu);

	loop_long(f, "%.50x\n", 0, LONG_MAX, 1000llu);
	loop_long(f, "%.50x\n", 0, LONG_MIN, 1000llu);
	loop_long(f, "%.50x\n", LONG_MAX, 0, 1000llu);
	loop_long(f, "%.50x\n", LONG_MIN, 0, 1000llu);

	loop_llong(f, "%.50x\n", 0, LLONG_MAX, 1000llu);
	loop_llong(f, "%.50x\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%.50x\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%.50x\n", LLONG_MIN, 0, 1000llu);

	loop_uint(f, "%.50x\n", 0, UINT_MAX, 1000llu);
	loop_uint(f, "%.50x\n", UINT_MAX, 0, 1000llu);

	loop_ulong(f, "%.50x\n", 0, ULONG_MAX, 1000llu);
	loop_ulong(f, "%.50x\n", ULONG_MAX, 0, 1000llu);

	loop_ullong(f, "%.50x\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%.50x\n", ULLONG_MAX, 0, 1000llu);

	loop_int(f, "%.50X\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%.50X\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%.50X\n", INT_MAX, 0, 1000llu);
	loop_int(f, "%.50X\n", INT_MIN, 0, 1000llu);

	loop_long(f, "%.50X\n", 0, LONG_MAX, 1000llu);
	loop_long(f, "%.50X\n", 0, LONG_MIN, 1000llu);
	loop_long(f, "%.50X\n", LONG_MAX, 0, 1000llu);
	loop_long(f, "%.50X\n", LONG_MIN, 0, 1000llu);

	loop_llong(f, "%.50X\n", 0, LLONG_MAX, 1000llu);
	loop_llong(f, "%.50X\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%.50X\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%.50X\n", LLONG_MIN, 0, 1000llu);

	loop_uint(f, "%.50X\n", 0, UINT_MAX, 1000llu);
	loop_uint(f, "%.50X\n", UINT_MAX, 0, 1000llu);

	loop_ulong(f, "%.50X\n", 0, ULONG_MAX, 1000llu);
	loop_ulong(f, "%.50X\n", ULONG_MAX, 0, 1000llu);

	loop_ullong(f, "%.50X\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%.50X\n", ULLONG_MAX, 0, 1000llu);

	loop_int(f, "%.50o\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%.50o\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%.50o\n", INT_MAX, 0, 1000llu);
	loop_int(f, "%.50o\n", INT_MIN, 0, 1000llu);

	loop_long(f, "%.50o\n", 0, LONG_MAX, 1000llu);
	loop_long(f, "%.50o\n", 0, LONG_MIN, 1000llu);
	loop_long(f, "%.50o\n", LONG_MAX, 0, 1000llu);
	loop_long(f, "%.50o\n", LONG_MIN, 0, 1000llu);

	loop_llong(f, "%.50o\n", 0, LLONG_MAX, 1000llu);
	loop_llong(f, "%.50o\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%.50o\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%.50o\n", LLONG_MIN, 0, 1000llu);

	loop_uint(f, "%.50o\n", 0, UINT_MAX, 1000llu);
	loop_uint(f, "%.50o\n", UINT_MAX, 0, 1000llu);

	loop_ulong(f, "%.50o\n", 0, ULONG_MAX, 1000llu);
	loop_ulong(f, "%.50o\n", ULONG_MAX, 0, 1000llu);

	loop_ullong(f, "%.50o\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%.50o\n", ULLONG_MAX, 0, 1000llu);

	//MISC

		//with signed int, positive
	loop_int(f, "%+d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%+100d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%+100.50d\n", 0, INT_MAX, 1000llu);

	loop_int(f, "% d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "% 100d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "% 100.50d\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%-d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%-100d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%-100.50d\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%#x\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%#100x\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%#100.50x\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%#X\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%#100X\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%#100.50X\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%#o\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%#100o\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%#100.50o\n", 0, INT_MAX, 1000llu);

		//with signed int, negative
	loop_int(f, "%+d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%+100d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%+100.50d\n", 0, INT_MIN, 1000llu);

	loop_int(f, "% d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "% 100d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "% 100.50d\n", 0, INT_MIN, 1000llu);

	loop_int(f, "%-d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%-100d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%-100.50d\n", 0, INT_MIN, 1000llu);

		//with unsigned long
	loop_ullong(f, "%+d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%+100d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%+100.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "% d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "% 100d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "% 100.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%-d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%-100d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%-100.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%#d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%#100d\n", ULLONG_MAX, 0, 10llu);
	loop_ullong(f, "%#100.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%#x\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%#100x\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%#100.50x\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%#X\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%#100X\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%#100.50X\n", ULLONG_MAX, 0, 1000llu);
	
	loop_ullong(f, "%#o\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%#100o\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%#100.50o\n", ULLONG_MAX, 0, 1000llu);

		//with unsigned long from 0
	loop_ullong(f, "%+d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%+100d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%+100.50d\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "% d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "% 100d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "% 100.50d\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%-d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%-100d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%-100.50d\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%#d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%#100d\n", 0, ULLONG_MAX, 10llu);
	loop_ullong(f, "%#100.50d\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%#x\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%#100x\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%#100.50x\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%#X\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%#100X\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%#100.50X\n", 0, ULLONG_MAX, 1000llu);
	
	loop_ullong(f, "%#o\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%#100o\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%#100.50o\n", 0, ULLONG_MAX, 1000llu);

		//with signed long, positive
	loop_llong(f, "%+d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%+100d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%+100.50d\n", LLONG_MAX, 0, 1000llu);

	loop_llong(f, "% d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "% 100d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "% 100.50d\n", LLONG_MAX, 0, 1000llu);

	loop_llong(f, "%-d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%-100d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%-100.50d\n", LLONG_MAX, 0, 1000llu);

		//with signed long, negative
	loop_llong(f, "%+d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%+100d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%+100.50d\n", 0, LLONG_MIN, 1000llu);

	loop_llong(f, "% d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "% 100d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "% 100.50d\n", 0, LLONG_MIN, 1000llu);

	loop_llong(f, "%-d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%-100d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%-100.50d\n", 0, LLONG_MIN, 1000llu);

	//All the previous tests but with '0' flag

		//with signed int, positive
	loop_int(f, "%0+d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0+100d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0+100.50d\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%0 d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0 100d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0 100.50d\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%0-d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0-100d\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0-100.50d\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%0#x\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0#100x\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0#100.50x\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%0#X\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0#100X\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0#100.50X\n", 0, INT_MAX, 1000llu);

	loop_int(f, "%0#o\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0#100o\n", 0, INT_MAX, 1000llu);
	loop_int(f, "%0#100.50o\n", 0, INT_MAX, 1000llu);

		//with signed int, negative
	loop_int(f, "%0+d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%0+100d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%0+100.50d\n", 0, INT_MIN, 1000llu);

	loop_int(f, "%0 d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%0 100d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%0 100.50d\n", 0, INT_MIN, 1000llu);

	loop_int(f, "%0-d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%0-100d\n", 0, INT_MIN, 1000llu);
	loop_int(f, "%0-100.50d\n", 0, INT_MIN, 1000llu);

		//with unsigned long
	loop_ullong(f, "%0+d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0+100d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0+100.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%0 d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0 100d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0 100.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%0-d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0-100d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0-100.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%0#d\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0#100d\n", ULLONG_MAX, 0, 10llu);
	loop_ullong(f, "%0#100.50d\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%0#x\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0#100x\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0#100.50x\n", ULLONG_MAX, 0, 1000llu);

	loop_ullong(f, "%0#X\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0#100X\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0#100.50X\n", ULLONG_MAX, 0, 1000llu);
	
	loop_ullong(f, "%0#o\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0#100o\n", ULLONG_MAX, 0, 1000llu);
	loop_ullong(f, "%0#100.50o\n", ULLONG_MAX, 0, 1000llu);

		//with unsigned long from 0
	loop_ullong(f, "%0+d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0+100d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0+100.50d\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%0 d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0 100d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0 100.50d\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%0-d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0-100d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0-100.50d\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%0#d\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0#100d\n", 0, ULLONG_MAX, 10llu);
	loop_ullong(f, "%0#100.50d\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%0#x\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0#100x\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0#100.50x\n", 0, ULLONG_MAX, 1000llu);

	loop_ullong(f, "%0#X\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0#100X\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0#100.50X\n", 0, ULLONG_MAX, 1000llu);
	
	loop_ullong(f, "%0#o\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0#100o\n", 0, ULLONG_MAX, 1000llu);
	loop_ullong(f, "%0#100.50o\n", 0, ULLONG_MAX, 1000llu);

		//with signed long, positive
	loop_llong(f, "%0+d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%0+100d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%0+100.50d\n", LLONG_MAX, 0, 1000llu);

	loop_llong(f, "%0 d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%0 100d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%0 100.50d\n", LLONG_MAX, 0, 1000llu);

	loop_llong(f, "%0-d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%0-100d\n", LLONG_MAX, 0, 1000llu);
	loop_llong(f, "%0-100.50d\n", LLONG_MAX, 0, 1000llu);

		//with signed long, negative
	loop_llong(f, "%0+d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%0+100d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%0+100.50d\n", 0, LLONG_MIN, 1000llu);

	loop_llong(f, "%0 d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%0 100d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%0 100.50d\n", 0, LLONG_MIN, 1000llu);

	loop_llong(f, "%0-d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%0-100d\n", 0, LLONG_MIN, 1000llu);
	loop_llong(f, "%0-100.50d\n", 0, LLONG_MIN, 1000llu);

		//pointers
	f("%p\n", NULL);
}
