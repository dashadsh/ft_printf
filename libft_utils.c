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

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}