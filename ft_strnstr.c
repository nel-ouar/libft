/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-ouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:02:36 by nel-ouar          #+#    #+#             */
/*   Updated: 2023/12/23 22:14:38 by nel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char str2, size_t size)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *) str1;
	s2 = (char *) str2;
	i = 0;
	if (!s1)
		return (NULL);
	if (!s2)
		return (s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] && s1[i + j] == s2[j] && i + j < len)
		{
			if (s2[j +1])
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
