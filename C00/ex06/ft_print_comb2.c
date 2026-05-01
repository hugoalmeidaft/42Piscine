/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo <hugoalmeidaft@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:16:37 by hugo              #+#    #+#             */
/*   Updated: 2026/04/27 18:33:17 by hugo             ###   ########.br       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
}
*/
void	ft_nbr(int x)
{
	char	a;
	char	b;

	a = x / 10 + '0';
	b = x % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_nbr(a);
			write(1, " ", 1);
			ft_nbr(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
		}
	}
}
