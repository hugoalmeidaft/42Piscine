/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_btto.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo <hugoalmeidaft@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:45:03 by hugo              #+#    #+#             */
/*   Updated: 2026/04/28 15:42:37 by hugo             ###   ########.br       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putnbr(int nb);

int	main(void)
{
        ft_putnbr(0);
        write(1, "\n", 1);
        ft_putnbr(3);
        write(1, "\n", 1);
        ft_putnbr(45);
        write(1, "\n", 1);
        ft_putnbr(-67);
        write(1, "\n", 1);
}
*/
void	ft_putnbr(int nb)
{
	long	n;
	char	result;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	result = (n % 10) + '0';
	write(1, &result, 1);
}
