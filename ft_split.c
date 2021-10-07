/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:53:21 by kamin             #+#    #+#             */
/*   Updated: 2021/10/07 19:41:40 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		counter;
	int		delcount;

	counter = 0;
	delcount = 0;
	while (s != NULL)
	{
		if (s[counter] == c)
			delcount++;
		counter++;
	}
	split = (char **)malloc((delcount + 1) * sizeof(char *));
	return (split);
}
