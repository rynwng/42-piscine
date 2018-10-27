/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CODE_rush03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:50:09 by rywang            #+#    #+#             */
/*   Updated: 2018/10/27 10:50:21 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); // Remember to submit separate file for ft_putchar.c.

void	rush(int x, int y)
{
	int foo; // foo is an int var counter representing width.
	int bar; // bar is an int var counter representing height.

	bar = 1; // Initialize bar (height counter).
	while (bar <= y) // Must print characters left to right, then top to bottom, so our limiting factor is height.
	{
		foo = 1; // Initialize foo (width counter). We must start from each line's beginning.
		while (foo <= x) // Printing left to right.
		{
			if ((foo == 1 && bar == 1) || (foo == 1 && bar == y)) // For all left-side corners (top and bottom).
				ft_putchar('A');
			else if ((foo == x && bar == 1) || (foo == x && bar == y)) // For all right-side corners (top and bottom).
				ft_putchar('C');
			else if (foo > 1 && foo < x && bar > 1 && bar < y) // For all middle/center spaces.
				ft_putchar(' ');
			else
				ft_putchar('B'); // For all edges.
			foo++; // Increment foo.
		}
		ft_putchar('\n'); // Print new line.
		bar++; // Increment bar.
	}
}
