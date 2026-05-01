/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_btto.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo <hugoalmeidaft@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:23:58 by hugo              #+#    #+#             */
/*   Updated: 2026/04/27 18:01:38 by hugo             ###   ########.br       */
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
void	ft_putchar(char x, char y)
{
	write(1, &x, 1);
	write(1, &y, 1);
}

void	ft_display(char *x)
{
	ft_putchar(x[0], x[1]);
	write(1, " ", 1);
	ft_putchar(x[2], x[3]);
	if (!(x[0] == '9' && x[1] == '8' && x[2] == '9' && x[3] == '9'))
		ft_putchar(',', ' ');
}

void	ft_print_comb2(void)
{
	char	x[4];

	x[0] = '0' - 1;
	while (++x[0] <= '9')
	{
		x[1] = '0' - 1;
		while (++x[1] <= '9')
		{
			x[2] = x[0] - 1;
			x[3] = x[1];
			while (++x[2] <= '9')
			{
				while (++x[3] <= '9')
				{
					ft_display(x);
				}
				x[3] = '0' - 1;
			}
		}
	}
}
