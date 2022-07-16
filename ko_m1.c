#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	if (!s)
		return (ft_putstr("(null)"));
	return (write(1, s, ft_strlen(s)));
}

/************************************************************/

int format(va_list ap, char c, int sum)
{
	if (c == 'c')
        sum += ft_putchar(va_arg(ap, int));
    else if (c == 's')
        sum += ft_putstr(va_arg(ap, char *));
    else if (c == '%')
        sum += ft_putchar('%');
	return(sum);
}

int myprint(char *str, ...)
{
	int sum = 0;
	va_list ap;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			sum = format(ap, *str, sum);
		}
		else
			sum += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return(sum);
}

int main()
{
    myprint("test %s %s\n", "test2", "test3");
    printf("test %s %s\n", "test2", "test3");
    return (0);
}

/*
m1 output:
test test2 test2
test test2 test3
*/