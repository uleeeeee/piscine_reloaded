void	ft_putchar(char ch);

void	ft_print_numbers(void) {
	int nb;

	nb = '0';
	while (nb <= '9') {
		ft_putchar(nb);
		nb++;
	}
}
