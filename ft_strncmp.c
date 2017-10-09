/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:34:16 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/08 02:19:47 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncmp() function compares string1 and string2 to the maximum count.
*/

#include "libft.h"

int		ft_strncmp(const char *string1, const char *string2, size_t num)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char*)string1;
	str2 = (unsigned char*)string2;
	while ((str1[i] || str2[i]) && i < num)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
