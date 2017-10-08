/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:17:06 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/05 23:31:30 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate (with malloc(3)) and returns a "fresh" string ending with '\0'
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
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
