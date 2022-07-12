#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	char	*name;
	unsigned int	days;

	va_list	ap; //ap in manuals
	va_start (ap, str);
	
	name = va_arg(ap, char *);
	days = va_arg(ap, unsigned int);
	ft_putstr_fd(name, 1);
	ft_putnbr_fd(days, 1);
	va_end(ap);
	return(0);
}

int main()
{
	ft_printf("%s, %u days\n", "Dasha", 78);
	return(0);
}