/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-ouar <nel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:32:55 by nel-ouar          #+#    #+#             */
/*   Updated: 2023/12/24 14:55:04 by nel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	char	*p;
	size_t	i;

	i = cont * n;
	p = malloc(i);
	if (p == 0)
		return (NULL);
	ft_bzero(p, i);
	return (p);
}
