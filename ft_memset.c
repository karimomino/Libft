/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:27:10 by kamin             #+#    #+#             */
/*   Updated: 2021/09/27 12:36:47 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		counter;
	char	*word;

	counter = len;
	word = b;
	while (counter > 0)
	{
		*word = c;
		counter--;
		word++;
	}
	return (b);
}
