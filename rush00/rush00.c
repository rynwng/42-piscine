/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:51:43 by rywang            #+#    #+#             */
/*   Updated: 2018/10/27 14:53:23 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int foo;
	int bar;

	bar = 1;
	while (bar <= y)
	{
		foo = 1;
		while (foo <= x)
		{
			if ((foo == 1 && bar == 1) || (foo == 1 && bar == y) || (foo == x && bar == 1) || (foo == x && bar == y))
				ft_putchar('o');
			else if ((bar == 1 || bar == y) && (foo > 1 && foo < x))
				ft_putchar('-');
			else if ((foo == 1 || foo == x) && (bar > 1 && bar < x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			foo++;
		}
		ft_putchar('\n');
		bar++;
	}
}
