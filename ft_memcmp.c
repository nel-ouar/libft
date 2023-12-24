/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-ouar <nel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:48 by nel-ouar          #+#    #+#             */
/*   Updated: 2023/12/24 14:54:41 by nel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;
	size_t			i;

	i = 0;
	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while ((i < n) && (d1[i] == d2[i]))
		i++;
	return (d1[i] - d2[i]);
}
