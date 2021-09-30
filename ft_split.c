/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:21:39 by kamin             #+#    #+#             */
/*   Updated: 2021/09/30 13:08:32 by kamin            ###   ########.fr       */
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
}
