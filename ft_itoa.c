/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:17:06 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/09 19:41:23 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The itoa() function converts the integer n into a character string.
**
**	Return value: A pointer to the resulting null-terminated string, same as
**	parameter, str.
*/

#include "libft.h"

static size_t		ft_digits(int n)
{
	size_t		count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}

char				*ft_itoa(int n)
{
	size_t			i;
	unsigned int	n_cpy;
	char			*str;

	i = ft_digits(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		i++;
	}
	if (!(str = ft_strnew(i)))
		return (NULL);
	str[--i] = n_cpy % 10 + '0';
	while (n_cpy /= 10)
		str[--i] = n_cpy % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
