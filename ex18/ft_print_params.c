#include <unistd.h>

void	ft_putstr(char *str);
int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	
	i = 0;
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		j++;
	}
	if (argc == 1)
		return (0);
}

void	ft_putchar(char c);
void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
