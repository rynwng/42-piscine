/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:33:13 by rywang            #+#    #+#             */
/*   Updated: 2018/10/27 10:41:00 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int foo;

	foo = 3;
	if ((nb == 2) || (nb == 3))
		return (1);
	if ((nb < 2) || (nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	while ((foo <= nb / 3))
	{
		if (nb % foo == 0)
			return (0);
		foo += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb--;
	if (nb < 2147483647)
		return (ft_find_next_prime(nb + 2));
	return (-1);
}
