/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:25:24 by kamin             #+#    #+#             */
/*   Updated: 2021/10/11 22:41:27 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char	*number;
	long	nbr;
	size_t	size;

	nbr = n;
	size = 1;
	while(n /= 10)
		size++;
	number = (char *)malloc(size * sizeof(char));
	if (!number)
		return (NULL);
	if (nbr == 0)
	{
		number[0] = '0';
		return (number);
	}
	if (nbr < 0)
	{
		size++;
		number[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		number[--size] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (number);
}
