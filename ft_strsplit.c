/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssumedi <ssumedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 18:09:09 by ssumedi           #+#    #+#             */
/*   Updated: 2017/10/07 22:04:24 by ssumedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array of "fresh" strings (all
** ending with '\0', including the array itself) obtained by spliting s
** using the character c as a delimiter. If the allocation fails the function
** returns NULL.
**
** Example: ft_strsplit("*hello*fellow***student*", '*') returns the array
** ["hello", "fellow", "students"].
**
** Return value - The array of "fresh" strings result of the split.
*/

#include "libft.h"

static size_t	ft_len_c_stop(const char *str, int start, char c_stop)
{
	size_t	counter;

	counter = 0;
	if (!str)
		return ('\0');
	while (str[start] && (str[start] != c_stop))
	{
		start++;
		counter++;
	}
	return (counter);
}

static int		ft_split_count(char const *s, char c)
{
	int		is_word;
	int		count_word;
	int		counter;
	char	*str;

	str = (char*)s;
	counter = 0;
	count_word = 0;
	while (str[counter])
	{
		is_word = 0;
		while ((str[counter] != (char)c) && str[counter + 1])
		{
			if (is_word == 0)
			{
				is_word = 1;
				count_word++;
			}
			counter++;
		}
		counter++;
	}
	return (count_word);
}

char			**ft_strsplit(char const *s, char c)
{
	int				count_word;
	int				i;
	unsigned int	counter;
	char			**array_s;
	char			*str;

	if (!s)
		return (NULL);
	str = (char*)s;
	count_word = ft_split_count(str, c);
	array_s = (char**)ft_memalloc(sizeof(char**) * (count_word + 1));
	if (!array_s)
		return (NULL);
	i = -1;
	counter = 0;
	while (++i < count_word)
	{
		while ((str[counter] == (char)c) && str[counter])
			counter++;
		array_s[i] = ft_strsub(str, counter, ft_len_c_stop(str, counter, c));
		while ((str[counter] != (char)c) && str[counter])
			counter++;
	}
	array_s[i] = 0;
	return (array_s);
}
