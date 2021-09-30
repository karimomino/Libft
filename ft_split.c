/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< Updated upstream:ft_split.c
/*   Created: 2021/09/30 12:21:39 by kamin             #+#    #+#             */
/*   Updated: 2021/09/30 13:08:32 by kamin            ###   ########.fr       */
=======
/*   Created: 2021/09/28 18:16:00 by kamin             #+#    #+#             */
/*   Updated: 2021/09/28 19:28:27 by kamin            ###   ########.fr       */
>>>>>>> Stashed changes:ft_strchr.c
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
