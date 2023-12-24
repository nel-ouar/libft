/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-ouar <nel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:20:17 by nel-ouar          #+#    #+#             */
/*   Updated: 2023/12/23 21:32:20 by nel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (!n)
		return (len);
	while (*dst && n)
	{
		dst++;
		i++;
		n--;
	}
	while (*src && n > 1)
	{
		*dst++ = *src++;
		n--;
	}
	if (n != 0)
	{
		*dst = '\0';
	}
	return (len + i);
}
