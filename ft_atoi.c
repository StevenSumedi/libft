/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 15:13:44 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/08 22:00:37 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function atoi() converts the string argument str to an integer.
*/

#include "libft.h"

static int		ft_isspace(int c)
{
	return (c == ' ' || (c >= 0x09 && c <= 0x0d));
}

static int		get_return(unsigned long long ret, int neg, const char *str)
{
	int		count;

	count = 0;
	while (*str <= '1' || *str >= '9')
		str++;
	while (ft_isdigit(*(str + count)))
		count++;
	if (count >= 19)
		return (neg == -1 ? 0 : -1);
	if (ret > 9223372036854775807)
		return (neg == -1 ? 0 : -1);
	else
		return (ret * neg);
}

int				ft_atoi(const char *str)
{
	unsigned long long		ret;
	int						len;
	int						x;
	int						neg;

	neg = 1;
	x = -1;
	len = 0;
	ret = 0;
	while (ft_isspace(*str))
		str++;
	while (str[len])
		len++;
	while (++x <= len)
	{
		if (ft_isdigit(str[x]))
			ret = (ret * 10) + (str[x] - '0');
		else if (x == 0 && (str[x] == '-' || str[x] == '+'))
			neg = str[x] == '-' ? -1 : 1;
		else
			return (get_return(ret, neg, str));
	}
	return (get_return(ret, neg, str));
}
