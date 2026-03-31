#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == 0)
		write(1, "0", 1);
	if (nb == 1)
		write(1, "1", 1);
	// Não mexer

	while (nb > 1)
	{
		
		int temp = 0;
		temp = (temp + (nb % 10));
		nb /= 10;
	}
}

int	main()
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
}
