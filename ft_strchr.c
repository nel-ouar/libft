/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-ouar <nel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:41:20 by nel-ouar          #+#    #+#             */
/*   Updated: 2023/12/24 12:20:17 by nel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*pt;

	i = 0;
	pt = (char *)s;
	while ((char )c != s[i] && s[i] != '\0')
		i++;
	if ((char )c == s[i])
		return (pt + i);
	else if (!s[i])
		return (NULL);
	return (NULL);
}
