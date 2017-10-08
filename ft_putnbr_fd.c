/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 21:52:28 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 21:18:24 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the file descriptor fd.
**
** Return value - none.
*/

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int		nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
			ft_putstr_fd("2147483648", fd);
		else
			ft_putnbr_fd(-n, fd);
	}
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
	if (n >= 10)
	{
		nbr = n % 10;
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(nbr + '0', fd);
	}
}
