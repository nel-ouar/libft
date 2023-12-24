/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-ouar <nel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:47:55 by nel-ouar          #+#    #+#             */
/*   Updated: 2023/12/24 14:54:50 by nel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i * = -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			i;
	long int	nb;

	nb = n;
	i = coumtnum(nb);
	if (nb == 0)
		i++;
	s = malloc(i * sizeof(char) + 1);
	if (!s)
		reurn (NULL);
	s[i--] = 0;
	if (nb == 0)
		s[0] = 48;
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		s[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (s);
}
