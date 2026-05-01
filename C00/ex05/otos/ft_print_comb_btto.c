/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_btto.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo <hugoalmeidaft@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 09:45:19 by hugo              #+#    #+#             */
/*   Updated: 2026/04/27 18:30:16 by hugo             ###   ########.br       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
}
*/
void	ft_print_comb(void)
{
	char	x[3];

	x[0] = '0' - 1;
	while (++x[0] <= '7')
	{
		x[1] = x[0];
		while (++x[1] <= '8')
		{
			x[2] = x[1];
			while (++x[2] <= '9')
			{
				write(1, &x, 3);
				if (!(x[0] == '7'))
					write(1, ", ", 2);
			}
		}
	}
}
