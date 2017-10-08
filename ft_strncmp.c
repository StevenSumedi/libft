/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:34:16 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/05 01:40:12 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncmp() function compares string1 and string2 to the maximum count.
*/

#include <libft.h>

int		ft_strncmp(const char *string1, const char *string2, size_t num)
{
	size_t	i;

	i = 0;
	while (string1[i] && string2[i] && (i < num))
	{
		if (string1[i] != string2[i])
			return ((unsigned char)string1[i] - (unsigned char)string2[i]);
		i++;
	}
	if (i == num)
		return (0);
	return ((unsigned char)string1[i] - (unsigned char)string2[i]);
}
