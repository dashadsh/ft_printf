#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	if (!s)
	{
		return ;
	}
	while (s[counter] != '\0')
	{
		write(fd, &s[counter], 1);
		counter++;
	}	
}

void	ft_putnbr_fd(int nb, int fd)
{
	long	casted_nb;

	casted_nb = nb;
	if (casted_nb < 0)
	{
		ft_putchar_fd('-', fd);
		casted_nb = -casted_nb;
	}
	if (casted_nb < 10)
		ft_putchar_fd(casted_nb + '0', fd);
	else
	{
		ft_putnbr_fd(casted_nb / 10, fd);
		ft_putnbr_fd(casted_nb % 10, fd);
	}
}
