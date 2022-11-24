
#include <stdio.h>
#include <stdarg.h>

void va_test(int n, ...)
{
	va_list pargs;

	va_start(pargs, n);
	printf("%c, %d, %s",va_arg(pargs, int), va_arg(pargs, int), va_arg(pargs, char *));
	va_end(pargs);
}

int main()
{
	va_test(1, 'c', 4, "string");
}
