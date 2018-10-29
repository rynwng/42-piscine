/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:43:55 by rywang            #+#    #+#             */
/*   Updated: 2018/10/26 14:00:50 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int foo;

	foo = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((foo <= 46340) && (foo <= nb / 2))
	{
		if (foo * foo == nb)
			return (foo);
		foo++;
	}
	return (0);
}