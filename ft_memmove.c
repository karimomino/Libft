/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 07:58:53 by kamin             #+#    #+#             */
/*   Updated: 2021/10/02 17:46:30 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	char	buff[len];
	size_t	i;

	source = (char *)src;
	destination = dst;
	i = 0;
	if ((dst == NULL && src == NULL) && len > 0)
		return (NULL);

	while (i++ < len)
	{
		buff[i - 1] = source[i - 1];
	}
	i = 0;
	while (i++ < len)
	{
		destination[i - 1] = buff[i - 1];
	}
	return (dst);
}
