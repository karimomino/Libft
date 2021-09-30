/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:28:38 by kamin             #+#    #+#             */
/*   Updated: 2021/09/30 10:27:31 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*string;

	len = ft_strlen(s);
	string = (char *)s;
	string += len;
	while (len-- >= 0)
	{
		if (*(string) == c)
			return (string);
		string--;
	}
	return (NULL);
}
