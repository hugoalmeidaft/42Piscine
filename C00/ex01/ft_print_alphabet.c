#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int x = 97;
	while (x <= 122)
	{
		write (1, &x, 1);
		x++;
	}
}
int	main()
{
	ft_print_alphabet();
	ft_putchar('\n');
}
