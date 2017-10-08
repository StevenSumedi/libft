/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:14:00 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/03 17:28:28 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function tolower() converts a given letter to lowercase.
**
** Return value - This function returns lowercase equivalent to c, if such
** value exists, else c remains unchanged. The value is returned as an int
** value that can be implicitly casted to char.
*/

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
