/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:16:00 by kamin             #+#    #+#             */
/*   Updated: 2021/09/30 10:28:07 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;
	char	*string;

	len = ft_strlen(s);
	string = (char *)s;
	while (len-- >= 0)
	{
		if (*string == c)
			return (string);
		string++;
	}
	return (NULL);
}
