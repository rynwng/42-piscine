/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:53:29 by rywang            #+#    #+#             */
/*   Updated: 2018/10/27 11:13:11 by rywang           ###   ########.fr       */
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
			if ((foo == 1 && bar == 1) || (foo == 1 && bar == y))
				ft_putchar('A');
			else if ((foo == x && bar == 1) || (foo == x && bar == y))
				ft_putchar('C');
			else if (foo > 1 && foo < x && bar > 1 && bar < y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			foo++;
		}
		ft_putchar('\n');
		bar++;
	}
}
