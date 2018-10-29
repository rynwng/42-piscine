/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 09:50:41 by rywang            #+#    #+#             */
/*   Updated: 2018/10/26 10:54:57 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int foo;
	int bar;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	foo = 1;
	bar = 1;
	while (foo <= nb)
	{
		bar *= foo;
		foo++;
	}
	return (bar);
}
