/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 11:34:45 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:15:22 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the standard output.
*/

#include "libft.h"

void		ft_putnbr(int n)
{
	int		nbr;

	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
			ft_putstr("2147483648");
		else
			ft_putnbr(-n);
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n >= 10)
	{
		nbr = n % 10;
		ft_putnbr(n / 10);
		ft_putchar(nbr + '0');
	}
}
