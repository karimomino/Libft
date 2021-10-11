/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:53:21 by kamin             #+#    #+#             */
/*   Updated: 2021/10/11 20:25:17 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_len(char const *s, char c)
{
	int	word_len;

	word_len = 0;
	while (*(s++) != c && *s != 0)
		word_len++;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		counter;
	int		delcount;
	int		i;
	int		word_len;

	counter = 0;
	delcount = 0;
	word_len = 0;
	i = 0;
	while (s[counter])
	{
		if (s[counter] == c)
			delcount++;
		counter++;
	}
	counter = delcount + 1;
	split = (char **)malloc(counter* sizeof(char *));
	if (!s || !split)
		return (NULL);
	while (i < counter)
	{
		word_len = ft_word_len(s, c);
		free(split[i]);
		split[i] = (char *)malloc(word_len + 1 * sizeof(char));
		while (*s != c && *s)
		{
			*split[i] = *s;
			split[i]++;
			s++;
		}
		split[i] -= word_len + 1;
		if (*s)
			s++;
		i++;	
	}
	split[i] = 0;
	return (split);
}

